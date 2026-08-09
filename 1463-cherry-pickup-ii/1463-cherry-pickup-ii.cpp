class Solution {
public:
    int row,col;

    int pickUp(vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, int i,int j1,int j2){
        if(j1<0 || j2<0 || j1>=col || j2>=col) return 0;
        if(i==row-1){
            if(j1==j2) return grid[i][j1];
            return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int sum=0;
        for(int d1=-1;d1<=1;d1++){
            for(int d2=-1;d2<=1;d2++){
                int val;
                if(j1==j2) val=grid[i][j1]+pickUp(grid,dp,i+1,j1+d1,j2+d2);
                else val=grid[i][j1]+grid[i][j2]+pickUp(grid,dp,i+1,j1+d1,j2+d2);
                sum=max(val,sum);
            }
        }
        return dp[i][j1][j2]=sum;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        row=n,col=m;
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        int total=pickUp(grid,dp,0,0,m-1);
        return total;
    }
};
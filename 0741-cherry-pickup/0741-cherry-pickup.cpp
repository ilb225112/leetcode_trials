class Solution {
public:
    int dp[51][51][51];

    int pickVal(vector<vector<int>> & grid,int i1,int i2,int j1,int n){
        int j2=i1+j1-i2;
        if(i1==n && j1==n) return grid[i1][j1];
        if(j1>n ||j2>n || i1>n || i2>n ||  grid[i1][j1]==-1 || grid[i2][j2]==-1) return -1e5;
        if(i1==n && j1==n) return grid[i1][j1];
        if(i2==n && j2==n) return grid[i2][j2];
        if(dp[i1][j1][i2]!=-1) return dp[i1][j1][i2];
        int sum=0;
        if(i1==i2 && j1==j2) sum+=grid[i1][j1];
        else sum+=grid[i1][j1]+grid[i2][j2];

        int c1=pickVal(grid,i1+1,i2+1,j1,n);
        int c2=pickVal(grid,i1+1,i2,j1,n);
        int c3=pickVal(grid,i1,i2+1,j1+1,n);
        int c4=pickVal(grid,i1,i2,j1+1,n);
        int ans=max({c1,c2,c3,c4});
        if(ans==-1e5) return dp[i1][j1][i2] = -1e5; 
        return dp[i1][j1][i2]=sum=sum+ans;
        
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        memset(dp, -1, sizeof(dp));
        if(grid[0][0]==-1 || grid[n-1][n-1]==-1) return 0;
        int ans=pickVal(grid,0,0,0,n-1);
        if(ans<0) return 0;
        return ans;
    }
};
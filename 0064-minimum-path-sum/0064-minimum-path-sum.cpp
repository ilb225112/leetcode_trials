class Solution {
public:
    int mps(vector<vector<int>> & grid, vector<vector<int>> & dp, int i,int j){
        if(i==0 && j==0) return grid[0][0];
        if(dp[i][j]!=-1) return dp[i][j];
        int up=(i>0)? mps(grid,dp,i-1,j): INT_MAX ;
        int left=(j>0)? mps(grid,dp,i,j-1):INT_MAX;
        return dp[i][j]=grid[i][j]+min(up,left);
    }


    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return mps(grid,dp,m-1,n-1);
    }
};
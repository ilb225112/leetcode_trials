class Solution {
public:
    int TotalPaths(int i, int j,vector<vector<int>> &dp){
        if(i==0 && j==0) return 1;
        if(j<0 || i<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=TotalPaths(i-1,j,dp);
        int left=TotalPaths(i,j-1,dp);
        return dp[i][j]=up+left;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return TotalPaths(m-1,n-1,dp);
    }
};
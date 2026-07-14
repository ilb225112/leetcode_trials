class Solution {
public:
    int paths(int i,int j,int m,int n,vector<vector<int>>& dp){
        if(i>=m || j>=n) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j]=paths(i+1,j,m,n,dp)+paths(i,j+1,m,n,dp);   
    }
    int uniquePaths(int m, int n) {
        if(m==1 || n==1) return 1;
        vector<vector<int>> dp(m,vector<int>(n,0)); 
        paths(0,0,m,n,dp);
        return dp[0][0];
    }
};
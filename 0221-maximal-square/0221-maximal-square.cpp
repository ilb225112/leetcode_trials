class Solution {
public:
    int square(int i, int j, vector<vector<char>>& matrix, vector<vector<int>>& dp, int m, int n){
        if(i>=m || j>=n || matrix[i][j]=='0') return 0;
        //if(i==m-1 || j==n-1) return matrix[i][j]=='1';
        if(dp[i][j]!=-1) return dp[i][j];

        int right=square(i,j+1,matrix,dp,m,n);
        int down=square(i+1,j,matrix,dp,m,n);
        int diag=square(i+1,j+1,matrix,dp,m,n);
        return dp[i][j]=1+min({right,down,diag});
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int side=0,maxSide=0;
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(matrix[i][j]!='0') {
                    side=square(i,j,matrix,dp,m,n);
                    maxSide=max(side,maxSide);        
                }
            }
        }
        return maxSide*maxSide;
    }
};
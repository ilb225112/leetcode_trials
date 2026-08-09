class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 ||obstacleGrid[m-1][n-1]==1) return 0;
        vector<int> prev(n,0);
        prev[0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1){prev[j]=0;continue;}
                else if(j>0)
                    prev[j]+=prev[j-1];
            }
        }
        return prev[n-1];
    }
};
class Solution {
public:
    #define FOR(i,a,n) for(i=a;i<n;i++)
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();

        int i,j;
        bool frow=0,fcol=0;

        FOR(j,0,cols) if(matrix[0][j]==0){
            frow=1;
            break;
        }

        FOR(i,0,rows) if(matrix[i][0]==0){
            fcol=1;
            break;
        }

        FOR(i,1,rows){
            FOR(j,1,cols){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        FOR(i,1,rows){
            if(matrix[i][0]==0)
                FOR(j,1,cols)
                    matrix[i][j]=0;
        }

        FOR(j,1,cols){
            if(matrix[0][j]==0)
                FOR(i,1,rows)
                    matrix[i][j]=0;
        }

        if(frow) FOR(j,0,cols) matrix[0][j]=0;
        if(fcol) FOR(i,0,rows) matrix[i][0]=0;
    }
};
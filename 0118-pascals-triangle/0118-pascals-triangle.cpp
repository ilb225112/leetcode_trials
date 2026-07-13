class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ptri(numRows);
        for(int i=0;i<numRows;i++){
            ptri[i].resize(i+1);
            ptri[i][0]=1;
            ptri[i][i]=1;
            for(int j=1;j<i;j++){
                ptri[i][j]=ptri[i-1][j]+ptri[i-1][j-1];
            }
        }
        return ptri;
    }
};
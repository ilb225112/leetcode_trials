class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ptri(numRows);
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0) ptri[i].push_back(1);
                else ptri[i].push_back(ptri[i-1][j]+ptri[i-1][j-1]);
            }
        }
        return ptri;
    }
};
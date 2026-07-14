class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        int hcol=n>>1;
        for(int j=0;j<hcol;j++){
            for(int i=0;i<m;i++){
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
        
    }
};
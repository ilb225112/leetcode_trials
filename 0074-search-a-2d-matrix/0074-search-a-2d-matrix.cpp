class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int l=0,r=m*n-1;
        while(l<=r){
            int mid=l+((r-l)>>1);
            int i=mid/n,j=mid%n;
            if(matrix[i][j]==target) return 1;
            else if(matrix[i][j]<target) l=mid+1;
            else r=mid-1;
            cout<<i<<" "<<j<<endl;
        }
        return 0;
    }
};
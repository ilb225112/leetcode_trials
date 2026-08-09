class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long res=0;
        int lastneg=abs(matrix[0][0]);
        int count=0;
        bool hasZero=0;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int num=matrix[i][j];
                if(num==0) hasZero=1;
                res+=abs(num);
                count+=(num<0);
                lastneg=min(lastneg,abs(num));
            }
        }
        if (count % 2 == 0 || hasZero) return res;
        return res - 2LL*lastneg; 
    }
};
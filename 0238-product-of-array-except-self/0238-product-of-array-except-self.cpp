class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int len=v.size(),temp=1;
        vector<int> res(len);
        
        for(int i=0;i<len;i++){
            res[i]=temp;
            temp*=v[i];
        }

        temp=1;
        for(int i=len-1;i>=0;i--){
            res[i]*=temp;
            temp*=v[i];
        }     
        return res;
    }
};
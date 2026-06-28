class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int len=v.size(),temp=1;
        vector<int> prefix(len);
        vector<int> suffix(len);
        vector<int> res(len);
        
        for(int i=0;i<len;i++){
            prefix[i]=temp;
            temp*=v[i];
        }

        temp=1;
        for(int i=len-1;i>=0;i--){
            suffix[i]=temp;
            temp*=v[i];
        }

        for(int i=0;i<len;i++)
            res[i]=prefix[i]*suffix[i];
        
        return res;
    }
};
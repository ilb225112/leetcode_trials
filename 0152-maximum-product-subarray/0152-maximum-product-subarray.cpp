class Solution {
public:
    int maxProduct(vector<int>& v){
        int pre=1,suf=1,res=INT_MIN;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suf==0) suf=1;
            pre*=v[i];
            suf*=v[n-i-1];
            res=max(res,max(pre,suf));
        }
        return res;    
    }
};
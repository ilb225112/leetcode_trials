class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int sum=0,res=v[0];
        for(int val:v){
            sum+=val;
            res=max(sum,res);
            if(sum<0) sum=0;
        }
        return res;
    }
};
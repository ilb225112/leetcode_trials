class Solution {
public:
    int maxProfit(vector<int>& v) {
        int res=0,m=v[0];

        for(int val:v){
            res=max(res,val-m);
            m=min(m,val);
        }
        return res;
    }
};
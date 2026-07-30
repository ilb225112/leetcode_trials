class Solution {
public:
    void csum(vector<int>& c,int tar, vector<vector<int>>& r,vector<int>& t, int idx){
        if(tar==0){r.push_back(t);return;}
        if(idx>=c.size() || tar<0)    return;

        t.push_back(c[idx]);
        csum(c,tar-c[idx],r,t,idx);
        t.pop_back();
        csum(c,tar,r,t,idx+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        csum(candidates,target,res,temp,0);
        return res;
    }
};
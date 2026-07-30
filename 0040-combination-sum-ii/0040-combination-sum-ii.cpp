class Solution {
public:
    void csum(vector<int> &candidates, int target, vector<vector<int>> &res, vector<int> &temp,int idx){
        if(target==0){
            res.push_back(temp);
            return;
        }
        int n=candidates.size();
        if(idx>=n || target<0) return;

        int next=idx;
        while(next<n && candidates[idx]==candidates[next]) next++;
        csum(candidates,target,res,temp,next);

        temp.push_back(candidates[idx]);
        csum(candidates,target-candidates[idx],res,temp,idx+1);
        temp.pop_back();
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        csum(candidates,target,res,temp,0);
        return res;
    }
};
class Solution {
public:
    void subsets(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int idx){
        int n=nums.size();
        if(idx>=n){
            res.push_back(temp);
            return;
        }
        
        int next=idx;
        while(next < n && nums[next]==nums[idx]) next++;
        subsets(nums,res,temp,next);
        temp.push_back(nums[idx]);
        subsets(nums,res,temp,idx+1);
        temp.pop_back();
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        subsets(nums,res,temp,0);
        return res;
    }
};
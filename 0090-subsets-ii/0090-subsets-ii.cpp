class Solution {
public:
    void subsets(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int idx){
        res.push_back(temp);
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            subsets(nums,res,temp,i+1);
            temp.pop_back();
        }        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        subsets(nums,res,temp,0);
        return res;
    }
};
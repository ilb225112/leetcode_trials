class Solution {
public:
    int size;

    void pms(vector<int> &nums, int idx, vector<vector<int>> &res){
        if(idx==size-1){
            res.push_back(nums);
            return;
        }

        for(int i=idx;i<size;i++){
            swap(nums[i],nums[idx]);
            pms(nums,idx+1,res);
            swap(nums[i],nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        size=nums.size();
        pms(nums,0,res);  
        return res;  
    }
};
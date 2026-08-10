class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> req;
        int len=nums.size();
        for(int i=0;i<len;i++){
            int required=target-nums[i];
            if(req.find(required)!=req.end()) return {i,req[required]};
            req[nums[i]]=i;
        } 
        return {};
    }
};
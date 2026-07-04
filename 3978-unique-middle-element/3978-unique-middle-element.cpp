class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int idx=n>>1;
        int target=nums[idx];
        for(int i=0;i<n;i++)
            if(i==idx) continue;
            else if(nums[i]==target) return 0;
        return 1;
    }
};
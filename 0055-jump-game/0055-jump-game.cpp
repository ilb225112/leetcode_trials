class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(maxreach<i) return 0;
            maxreach=max(maxreach,nums[i]+i);
            if(maxreach>=n-1) return 1;
        }
        return 1;
    }
};
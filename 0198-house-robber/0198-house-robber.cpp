class Solution {
public:
    int val(vector<int>& nums,vector<int>& dp, int idx){
        if(idx==0) return nums[0];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick=nums[idx]+val(nums,dp,idx-2);
        int notPick=0+val(nums,dp,idx-1);
        return dp[idx]=max(pick,notPick);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return val(nums,dp,n-1);
    }
};
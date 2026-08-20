class Solution {
public:
    bool subsetSum(vector<int>& nums,int target, int idx,vector<vector<int>> &dp){
        if(target==0) return 1;
        if(target<0) return 0;
        if(idx==0) return nums[0]==target;
        if(dp[idx][target]!=-1) return dp[idx][target];

        bool take=subsetSum(nums,target-nums[idx],idx-1,dp);
        bool notTake=subsetSum(nums,target,idx-1,dp);
        return dp[idx][target]=(take||notTake);
    }

    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i: nums) sum+=i;
        if(sum&1) return 0;
        
        int target=sum>>1;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return subsetSum(nums,target,n-1,dp);
    }
};
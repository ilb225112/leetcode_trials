class Solution {
public:
    int helper(vector<int>& nums) {
        int n=nums.size();
        int curr,prev=nums[0],prev2=0;
        for(int i=1;i<n;i++){
            int pick=nums[i]+prev2;
            int notPick=prev;
            curr=max(pick,notPick);
            prev2=prev,prev=curr;
        }
        return prev;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return helper(nums);
        vector<int> temp1,temp2;
        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(helper(temp1),helper(temp2));
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,len=INT_MAX;
        int l=0,n=nums.size();

        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>=target){
                len=min(len,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};
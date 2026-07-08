class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        int maxSum=sum, len=nums.size();
        int l=0,r=k;

        while(r<len){
            sum-=nums[l];
            sum+=nums[r];
            maxSum=max(sum,maxSum);
            l++;r++;
        }

        return (double)maxSum/k;
    }
};
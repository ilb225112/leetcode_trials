class Solution {
public:
    bool solve(int div,vector<int>& nums, int threshold){
        int sum=0;
        for(int i: nums){
            sum+=((i/div)+(i%div!=0));
            if(sum>threshold) return 0;
        }
        return 1;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int r=nums[0],l=1;
        for(int i:nums) r=max(r,i);

        while(l<r){
            int mid=l+((r-l)>>1);
            bool isSmall=solve(mid,nums,threshold);
            if(isSmall){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return r;
    }
};
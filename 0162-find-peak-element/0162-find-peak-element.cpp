class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(r==0) return 0;
        if(r==1) return (nums[0]<nums[1])?1:0;

        while(l<r){
            int mid=l+((r-l)>>1);
            if(nums[mid]>nums[mid+1]) r=mid;
            else l=mid+1;
        }
        return l;
    }
};
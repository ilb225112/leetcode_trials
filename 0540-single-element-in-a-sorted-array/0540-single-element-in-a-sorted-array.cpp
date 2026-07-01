class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=l+((r-l)>>1);
            mid&=~1; //always makes mid even
            if(nums[mid]==nums[mid+1]) l=mid+2;
            else r=mid;
        }
        return nums[l];
    }
};
class Solution {
public:
    int searchInsert(vector<int> & nums,int target){
        int l=0,n=nums.size(),r=n-1;
        while(l<r){
            int mid=l+((r-l)>>1);
            if(nums[mid]>=target){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        if(l==n-1 && nums[l]<target) return n;
        return l;
    }
};
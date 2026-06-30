class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,n=nums.size();
        if(n==0) return {-1,-1};
        int r=n-1;
        vector<int> res(2,-1);
        
        while(l<r){
            int mid=l+((r-l)>>1);
            if(nums[mid]>=target) r=mid;
            else l=mid+1;
        }
        if(nums[l]!=target) return res;
        res[0]=l;
        r=n-1;
        while(l<r){
            int mid=l+((r-l+1)>>1);
            if(nums[mid]<=target) l=mid;
            else r=mid-1;
        }
        res[1]=l;
        return res;
    }
};
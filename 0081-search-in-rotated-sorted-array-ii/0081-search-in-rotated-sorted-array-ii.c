bool search(int* nums, int numsSize, int target) {
    if(numsSize==0) return nums[0]==target;
    int l=0,r=numsSize-1,mid=0;

    while(l<=r){
        mid=l+(r-l)/2;
        if(nums[mid]==target)
            return 1;

        if(nums[l]==nums[mid] && nums[mid]==nums[r]){
            l++;r--;
            continue;
        }
        if(nums[l]<=nums[mid]){
            if(nums[l]<=target && target<=nums[mid])
                r=mid-1;
            else
                l=mid+1;
        }else{
            if(nums[mid]<=target && target<=nums[r])
                l=mid+1;
            else
                r=mid-1;
        }
    }
    return 0;
}
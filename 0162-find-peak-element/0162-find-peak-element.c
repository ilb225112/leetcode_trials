int findPeakElement(int* nums, int numsSize) {
    if(numsSize==1) return 0;
    if(nums[0]>nums[1]) return 0;
    if(nums[numsSize-1]>nums[numsSize-2]) return numsSize-1;

    int l=1,r=numsSize-2;
    while(l<=r){
        int mid=l+((r-l)>>1);
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
            return mid;
        else if(nums[mid]>nums[mid-1])
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
int findPeakElement(int* nums, int numsSize) {
    int l=0,r=numsSize-1;

    while (l<r){
        int mid=l+((r-l)>>1);
        if (nums[mid]<nums[mid+1])
            l=mid+1;
        else
            r=mid;
    }
    return l;
}
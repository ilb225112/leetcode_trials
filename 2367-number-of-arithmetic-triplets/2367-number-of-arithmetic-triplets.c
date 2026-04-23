bool binS(int* nums,int numsSize,int target){
    int l=0,r=numsSize-1;

    while(l<=r){
        int mid=l+((r-l)>>1);
        if(nums[mid]==target)
            return 1;
        else if(nums[mid]<target)
            l=mid+1;
        else
            r=mid-1;
    }
    return 0;
}

int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int counter=0;
    for(int i=0;i<numsSize;i++){
        if(binS(nums,numsSize,nums[i]+diff) && binS(nums,numsSize,nums[i]+2*diff))
            counter++;
    }
    return counter;
}
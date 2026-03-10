int alternatingSum(int* nums, int numsSize) {
    int res=0;
    for(int i=0;i<numsSize;i+=2){
        res+=nums[i];
    }
    for(int i=1;i<numsSize;i+=2){
        res-=nums[i];
    }
    return res;
}
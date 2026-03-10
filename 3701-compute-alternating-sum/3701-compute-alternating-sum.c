int alternatingSum(int* nums, int numsSize) {
    int res=0;
    for(int i=0;i<numsSize;i++){
        if(i%2)
            res-=nums[i];
        else
            res+=nums[i];
    }
    return res;
}
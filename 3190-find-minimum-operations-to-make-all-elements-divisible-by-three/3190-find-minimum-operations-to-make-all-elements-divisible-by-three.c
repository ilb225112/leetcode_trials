int minimumOperations(int* nums, int numsSize) {
    int res=0;
    for(int i=0;i<numsSize;i++)
        res+=(nums[i]%3!=0);
    return res;
}
int arithmeticTriplets(int* nums, int numsSize, int diff) {
    bool isPresent[260]={0};
    int res=0;

    for(int i=0;i<numsSize;i++)
        isPresent[nums[i]]=1;
    for(int i=0;i<numsSize;i++)
        res+= (isPresent[nums[i]+diff] && isPresent[nums[i]+2*diff]);

    return res;
}
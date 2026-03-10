int alternatingSum(int* nums, int numsSize) {
    int res=0;
    bool flag=0;
    for(int i=0;i<numsSize;i++){
        if(!flag)
            res+=nums[i];
        else
            res-=nums[i];
        flag=!flag;
    }
    return res;
}
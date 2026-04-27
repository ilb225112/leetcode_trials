int evenNumberBitwiseORs(int* nums, int numsSize) {
    int res=0;
    for(int i=0;i<numsSize;i++)
        res|=(nums[i]&1)?0:nums[i];
    return res;
}
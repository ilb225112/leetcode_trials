bool isArraySpecial(int* nums, int numsSize) {
    bool flag=nums[0]&1;
    for(int i=1;i<numsSize;i++){
        flag^=1;
        if((nums[i]&1)^flag) return 0;
    }
    return 1;
}
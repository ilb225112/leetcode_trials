int minOperations(int* nums, int numsSize){
    int res=0;
    for(int i=1;i<numsSize;i++){
        if(nums[i-1]>=nums[i]){
            res+=nums[i-1]+1-nums[i];
            nums[i]=nums[i-1]+1;
        }
    }
    return res;
}
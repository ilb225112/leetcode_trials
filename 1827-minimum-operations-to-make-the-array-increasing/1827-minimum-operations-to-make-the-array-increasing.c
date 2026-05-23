int minOperations(int* nums, int numsSize){
    int res=0;
    if(numsSize<=1) return res;

    int prev=nums[0];
    for(int i=1;i<numsSize;i++){
        if(prev>=nums[i]){
            res+=prev+1-nums[i];
            nums[i]=prev+1;
            prev=nums[i];
        }else
            prev=nums[i];
    }
    return res;
}
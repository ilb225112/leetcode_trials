#define max(a,b) ((a)>(b)?(a):(b))

int minOperations(int* nums, int numsSize){
    int res=0;
    if(numsSize<=1) return res;

    int prev=nums[0];
    for(int i=1;i<numsSize;i++){
            prev=max(nums[i],prev+1);
            res+=prev-nums[i];
    }
    return res;
}
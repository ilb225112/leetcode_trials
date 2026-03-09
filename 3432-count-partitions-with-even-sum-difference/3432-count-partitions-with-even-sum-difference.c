int countPartitions(int* nums, int numsSize) {
    int count=0,sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }

    for(int i=1;i<numsSize;i++){
        if((sum-nums[i-1]-nums[i-1])%2==0)
            count++;
        sum-=(nums[i-1]+nums[i-1]);
    }

    return count;
}
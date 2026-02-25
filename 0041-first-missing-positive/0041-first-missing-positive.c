int firstMissingPositive(int* nums, int numsSize) {
    //logic: soln is either <=numsSize or numsSize+1
    //replace all -ve numbers with random +ve no.
    for(int i=0;i<numsSize;i++)
        if(nums[i]<=0)
            nums[i] = numsSize+1;
    
    //mark no.<numsSize ka pos -> -ve
    for(int i=0;i<numsSize;i++){
        int val=abs(nums[i]);
        if(val<=numsSize && nums[val-1]>0)
            nums[val-1]*=-1;
    }

    //whichever positive no. is encountered 1st return that pos;
    for(int i=0;i<numsSize;i++)
        if(nums[i]>0)
            return i+1;
    return numsSize+1;
}
bool canAliceWin(int* nums, int numsSize) {
    int dSum=0;
    for(int i=0;i<numsSize;i++)
        if(nums[i]>9) dSum+=nums[i];
        else dSum-=nums[i];
    return (dSum!=0);
}
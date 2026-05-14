bool isGood(int* nums, int numsSize) {
    bool track[201]={0};
    int count=1;
    for(int i=0;i<numsSize;i++)
        if(nums[i]>=numsSize) return 0;
        else if(track[nums[i]]) 
            if(nums[i]!=numsSize-1)   return 0;
            else if(count>2) return 0;
            else count++;
        else track[nums[i]]=1;
    return count==2;
}
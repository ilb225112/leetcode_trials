/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int rsum=0,lsum=0;
    int* res=malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;

    for(int i=0;i<numsSize;i++)
        rsum+=nums[i];
    
    for(int i=0;i<numsSize;i++){
        res[i]=abs(rsum-lsum-nums[i]);
        lsum+=nums[i];
        rsum-=nums[i];
    }
    return res;
}
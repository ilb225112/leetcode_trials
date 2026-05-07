/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxValue(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    if(numsSize==0) return NULL;

    int* suf=malloc(sizeof(int)*numsSize);
    int* res=malloc(sizeof(int)*numsSize);

    suf[numsSize-1]=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--)
        suf[i]=(nums[i]<suf[i+1])?nums[i]:suf[i+1];

    res[0] = nums[0];
    for (int i=1;i<numsSize;i++) 
        res[i] =(res[i-1]>nums[i])?res[i-1]:nums[i];

    for(int i=numsSize-2;i>=0;i--)
        if(res[i]>suf[i+1])
            res[i]=res[i+1];

    free(suf);
    return res;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxValue(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    if(numsSize==0) return NULL;

    int* pre=malloc(sizeof(int)*numsSize);
    int* suf=malloc(sizeof(int)*numsSize);
    int* res=malloc(sizeof(int)*numsSize);

    pre[0]=nums[0];
    for(int i=1;i<numsSize;i++)
        pre[i]=fmax(pre[i-1],nums[i]);

    suf[numsSize-1]=nums[numsSize-1];
    for(int i=numsSize-2;i>=0;i--)
        suf[i]=fmin(suf[i+1],nums[i]);

    res[numsSize-1]=pre[numsSize-1];
    for(int i=numsSize-2;i>=0;i--){
        if(pre[i]>suf[i+1])
            res[i]=res[i+1];
        else
            res[i]=pre[i];
    }

    return res;
}
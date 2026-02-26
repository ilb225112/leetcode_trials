/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* res =(int*)malloc(sizeof(int)*(numsSize/2 + 1));
    *returnSize=0;

    int bitmap[(100001/32)+1]={0};
    
    for(int i=0;i<numsSize;i++) {
        int idx=nums[i]/32;
        int bit=nums[i]%32;
        if (bitmap[idx]&(1 << bit))
            res[(*returnSize)++] = nums[i];
        else
            bitmap[idx]|=(1<< bit);
    }
    return res;
}
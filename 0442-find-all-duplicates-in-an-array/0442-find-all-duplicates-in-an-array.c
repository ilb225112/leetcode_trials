/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* res =(int*)malloc(sizeof(int)*(numsSize/2 + 1));
    bool* seen=(bool*)calloc(numsSize+1,sizeof(bool));
    *returnSize=0;

    for(int i=0;i<numsSize;i++)
        if(seen[nums[i]])
            res[(*returnSize)++]=nums[i];
        else
            seen[nums[i]]=1;
    
    free(seen);
    return res;
}
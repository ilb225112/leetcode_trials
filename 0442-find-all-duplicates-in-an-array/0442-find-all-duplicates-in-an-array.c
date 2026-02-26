/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* res =(int*)malloc(sizeof(int)*(numsSize/2 + 1));
    *returnSize=0;

    for(int i=0;i<numsSize;i++){
        int pos = abs(nums[i])-1;
        if(nums[pos]<0)
            res[(*returnSize)++]=pos+1;
        else nums[pos]*=-1;
    }
    return res;
}
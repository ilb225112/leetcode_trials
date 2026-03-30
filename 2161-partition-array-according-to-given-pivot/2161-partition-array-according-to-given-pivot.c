/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* res=malloc(sizeof(int)*numsSize);

    int less=0,equal=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot) less++;
        else if(nums[i]==pivot) equal++;
    }

    int l=0;
    int m=less;
    int r=less+equal;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<pivot) res[l++]=nums[i];
        else if(nums[i]==pivot) res[m++]=nums[i];
        else res[r++]=nums[i];
    }
    *returnSize = numsSize;
    return res;
}
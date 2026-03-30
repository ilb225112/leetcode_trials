/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* res=malloc(sizeof(int)*numsSize);

    int l=0,r=numsSize-1;

    for(int i=0,j=numsSize-1;i<numsSize;i++,j--){
        if(nums[i]<pivot){
            res[l++]=nums[i];
        }
        if(nums[j]>pivot){
            res[r--]=nums[j];
        }
    }

    while(l<=r){
        res[l++]=pivot;
    }
    *returnSize=numsSize;
    return res;
}
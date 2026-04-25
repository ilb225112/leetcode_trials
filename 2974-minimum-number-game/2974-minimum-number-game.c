/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}

int* numberGame(int* nums, int numsSize, int* returnSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    *returnSize=numsSize;

    for(int i=1;i<numsSize;i+=2){
        int temp=nums[i-1];
        nums[i-1]=nums[i];
        nums[i]=temp;
    }

    return nums;
}
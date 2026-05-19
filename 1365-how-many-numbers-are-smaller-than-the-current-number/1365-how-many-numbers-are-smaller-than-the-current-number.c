/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* res=calloc(numsSize,sizeof(int));
    *returnSize=numsSize;

    for(int i=0;i<numsSize;i++){
        int key=nums[i];
        for(int j=i+1;j<numsSize;j++){
            if(key<nums[j]) res[j]++;
            else if(key>nums[j]) res[i]++;
        }
    }

    return res;
}
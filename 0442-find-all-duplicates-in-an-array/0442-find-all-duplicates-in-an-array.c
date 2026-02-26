/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* res =(int*)malloc(sizeof(int)*(numsSize/2 + 1));
    *returnSize=0;

    //trying cyclic sorting
    for(int i=0;i<numsSize;i++){
        while(nums[i]!=nums[nums[i]-1]){
            int t=nums[i];
            nums[i]=nums[t-1];
            nums[t-1]=t;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=i+1)
            res[(*returnSize)++]=nums[i];
    }
    return res;
}
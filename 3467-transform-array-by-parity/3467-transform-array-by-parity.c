/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int p=0,q=numsSize-1;
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++){
        nums[i]&=1;
    }
    while(p<q){
        if(nums[p]==1 && nums[q]==0){
            nums[p++]=0;
            nums[q--]=1;
        }else if(nums[p]==1){
            q--;
        }else
            p++;
    }
    return nums;
}
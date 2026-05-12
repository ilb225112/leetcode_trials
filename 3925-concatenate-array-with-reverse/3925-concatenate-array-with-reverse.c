/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int len=numsSize+numsSize;
    int* res=malloc(sizeof(int)*(len));
    *returnSize=len;
    len--;

    for(int i=0;i<numsSize;i++){
        res[i]=nums[i];
        res[len-i]=nums[i];
    }

    return res;
}
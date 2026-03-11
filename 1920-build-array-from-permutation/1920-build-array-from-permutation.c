/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    // store 2 vals: some multiple of number>n & old number as remainder
    // so u later u can acess modified or ans using /
    *returnSize = numsSize;

    for(int i=0;i<numsSize;i++)
        nums[i] += (1001 * (nums[nums[i]] % 1001));
    for(int i=0;i<numsSize;i++)
        nums[i]/=1001;
    return nums;
}
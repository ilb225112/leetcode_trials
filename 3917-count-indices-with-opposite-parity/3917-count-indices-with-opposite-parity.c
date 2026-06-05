/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    int* res=calloc(numsSize,sizeof(int));
    int odd=0,even=0;

    res[numsSize-1]=0;
    odd = nums[numsSize-1] & 1;
    even = odd ^1 ;
    for(int i=numsSize-2;i>=0;i--){
        if(nums[i]&1) {res[i]=even;  odd++;}
        else {res[i]=odd; even++;}
    }

    *returnSize=numsSize;
    return res;
}
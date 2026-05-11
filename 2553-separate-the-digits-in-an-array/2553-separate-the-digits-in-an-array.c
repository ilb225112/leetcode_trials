/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int size=0;
    for(int i=0;i<numsSize;i++){
        int temp=nums[i];
        size+=(int)log10(temp)+1;
    }
    *returnSize=size;
    int* ans=(int*)malloc(sizeof(int*)*size);

    int idx=size-1;
    for(int i=numsSize-1;i>=0;i--){
        int val=nums[i];
        while(val>0){
            ans[idx--]=val%10;
            val/=10;
        }
    }

    return ans;
}
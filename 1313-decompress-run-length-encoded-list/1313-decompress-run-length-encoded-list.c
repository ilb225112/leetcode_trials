/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int n=0;
    for(int i=0;i<numsSize;i+=2)
        n+=nums[i];

    int* res=calloc(n+1,sizeof(int));
    *returnSize=n;
    int idx=0;

    for(int i=0;i<numsSize;i+=2){
        n=nums[i]-1;
        int num=nums[i+1];

        while(n>=0){
            res[idx++]=num;
            n--;
        }
    }
    return res;    
}
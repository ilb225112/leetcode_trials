/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int min=nums[0],max=nums[0];
    bool check[101]={0};
    
    for(int i=0;i<numsSize;i++){
        max=(max+nums[i]+abs(max-nums[i]))/2;
        min=(min+nums[i]-abs(min-nums[i]))/2;
        check[nums[i]-1]=1;
    }

    int len=(max-min+1)-numsSize;
    int* res= malloc((len+1)*sizeof(int));
    *returnSize=0;
    if(len==0) return res;

    for(int i=min-1;i<max;i++){
        if(!check[i])
            res[(*returnSize)++]=i+1;
    }

    return res;
}
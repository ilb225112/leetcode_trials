/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for(int i=0;i<numsSize;i++) 
        nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);

    int* res=malloc(sizeof(int)*numsSize);
    int cnt=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]>0){
            res[cnt++]=i+1;
        }
    }
        
    *returnSize=cnt;
    return res;
}
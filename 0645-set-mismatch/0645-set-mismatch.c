/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    *returnSize=2;
    int* res = (int*)malloc(sizeof(int)*2);
    int pos=0,i,actSum = (numsSize * (numsSize+1))/2;

    for(i=0;i<numsSize;i++){
        pos=abs(nums[i])-1;
        if(nums[pos]<0){
            res[0] = pos+1;
            break;
        }
        nums[pos]*=-1;
        actSum-=(pos+1);
    }
    i++;
    for(;i<numsSize;i++){
        actSum-=abs(nums[i]);
    }
    res[1]=actSum;
    return res;
}
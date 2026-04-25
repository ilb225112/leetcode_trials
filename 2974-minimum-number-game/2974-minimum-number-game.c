/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* numberGame(int* nums, int numsSize, int* returnSize) {
    int count[101]={0};
    for(int i=0;i<numsSize;i++)
        count[nums[i]]++;

    int* res=malloc(sizeof(int)*numsSize);
    *returnSize=numsSize;

    int k=0,flag=-1;
    for(int i=1;i<=100;i++){
        while(count[i]>0){
            if(flag==-1)
                flag=i;
            else{
                res[k++]=i;
                res[k++]=flag;
                flag=-1;
            }
        count[i]--;
        }
    }
    return res;
}
int cmp(const void* a, const void *b){
    int x=*(int*)a;
    int y=*(int*)b;
    if(x>y) return 1;
    return -1;
}

int countPairs(int* nums, int numsSize, int target) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int p=0,q=numsSize-1;
    int res=0;

    while(p<q){
        if(nums[p]+nums[q]<target){
            res+=(q-p);
            p++;
        }else{
            q--;
        }
    }
    return res;
}
int numIdenticalPairs(int* nums, int numsSize) {
    int cnt[101]={0}, res=0;

    for(int i=0;i<numsSize;i++){
        res += cnt[nums[i]];
        cnt[nums[i]]++;
    }
    return res;
}
int findNumbers(int* nums, int numsSize) {
    int cnt=0;
    for(int i=0;i<numsSize;i++){
        if((int)log10(nums[i]) & 1) cnt++;
    }
    return cnt;
}
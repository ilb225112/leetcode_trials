int countKDifference(int* nums, int numsSize, int k) {
    int freq[201]={0};
    int res=0;

    for(int i=0;i<numsSize;i++){
        if(nums[i]>=k)
            res+=freq[nums[i]-k];
        res+=freq[nums[i]+k];
        freq[nums[i]]+=1;
    }

    return res;
}
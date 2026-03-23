bool canPartition(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++)
        sum+=nums[i];
    
    if(sum & 1) return 0;

    sum/=2;
    bool* dp =calloc(sum+1,sizeof(bool));
    dp[0] =true;
    for (int i=0;i<numsSize;i++){
        int num =nums[i];
        for (int j=sum;j>=num;j--){
            dp[j]=dp[j] || dp[j - num];
            if(dp[sum]) return 1;
        }
    }
    
    bool res = dp[sum];
    free(dp);
    return res;
}
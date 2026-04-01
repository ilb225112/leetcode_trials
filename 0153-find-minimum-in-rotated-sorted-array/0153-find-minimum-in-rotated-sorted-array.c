int findMin(int* nums, int numsSize) {
    int l=0,r=numsSize-1;
    int ans=INT_MAX;


    while(l<=r){
        int m=l+((r-l)>>1);
        if(nums[l]<=nums[m]){
            ans=fmin(ans,nums[l]);
            l=m+1;
        }else{
            ans=fmin(ans,nums[m]);
            r=m-1;
        }
    }
    return ans;
}
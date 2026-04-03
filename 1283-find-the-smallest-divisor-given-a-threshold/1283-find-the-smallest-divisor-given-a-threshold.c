int smallestDivisor(int* nums, int numsSize, int threshold) {
    int l=1,r=nums[0];
    for(int i=1;i<numsSize;i++)
        if(nums[i]>r) r=nums[i];

    while(l<=r){
        int mid=l+((r-l)>>1),sum=0;
        for(int i=0;i<numsSize;i++){
            sum+=(nums[i]+mid-1)/mid;
            if(sum>threshold) break;
        }
        if(sum<=threshold)
            r=mid-1;
        else 
            l=mid+1;
    }
    return l;
}
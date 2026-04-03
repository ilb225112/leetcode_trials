bool lt(int* nums, int numsSize,int div,int threshold){
    long res=0;
    for(int i=0;i<numsSize;i++)
        res+=(nums[i]+div-1)/div;
    return res<=threshold;
}

int smallestDivisor(int* nums, int numsSize, int threshold) {
    int l=1,r=1e6;
    while(l<=r){
        int mid=l+((r-l)>>1);
        if(lt(nums,numsSize,mid,threshold))
            r=mid-1;
        else 
            l=mid+1;
    }
    return l;
}
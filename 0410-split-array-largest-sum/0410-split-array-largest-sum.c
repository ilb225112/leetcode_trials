int count(int* arr,int n,int max){
    int cntk=1,sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=max){
            sum+=arr[i];
        }else{
            cntk++;
            sum=arr[i];
        }
    }
    return cntk;
}

int splitArray(int* nums, int numsSize, int k) {
    int l=nums[0],r=nums[0];
    for(int i=1;i<numsSize;i++){
        if(l<nums[i]) l=nums[i];
        r+=nums[i];
    }
    while(l<=r){
        int mid=l+((r-l)>>1);
        if(count(nums,numsSize,mid)>k)
            l=mid+1;
        else
            r=mid-1;
    }
    return l;
}
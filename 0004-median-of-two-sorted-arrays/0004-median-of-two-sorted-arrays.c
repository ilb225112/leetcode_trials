double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if(nums1Size>nums2Size) 
        return findMedianSortedArrays(nums2,nums2Size, nums1, nums1Size);
    int l=0,high=nums1Size,len=nums1Size+nums2Size;
    int left = (len+1)>>1;

    while(l<=high){
        int mid1 = (l+high)>>1;
        int mid2 = left -mid1;
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;

        if(mid1<nums1Size) r1=nums1[mid1];
        if(mid2<nums2Size) r2=nums2[mid2];
        if(mid1-1 >=0) l1=nums1[mid1-1];
        if(mid2-1 >=0) l2=nums2[mid2-1];

        if(l1<=r2 && l2<=r1){
            if(len%2==1) return (l1>l2)?l1:l2;
            else{
                return ((((l1>l2)?l1:l2) + ((r1<r2)?r1:r2) )/2.0);
            }
        }else if(l1>r2){
            high = mid1-1;
        }else{
            l=mid1+1;
        }
    }

    return 0.0;
}
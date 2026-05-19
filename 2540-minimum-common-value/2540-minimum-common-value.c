int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0;
    while(nums1Size-i && nums2Size-j){
        if(nums1[i]>nums2[j]) j++;
        else if(nums1[i]<nums2[j]) i++;
        else return nums1[i];
    }
    return -1;
}
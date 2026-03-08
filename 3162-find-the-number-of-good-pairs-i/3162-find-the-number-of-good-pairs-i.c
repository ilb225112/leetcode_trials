int numberOfPairs(int* nums1, int nums1Size, int* nums2, int nums2Size, int k) {
    int count=0;
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]%k==0){
            for(int j=0;j<nums2Size;j++){
                if(!(nums1[i]%(k*nums2[j])))
                    count++;
            }
        }
    }
    return count;
}
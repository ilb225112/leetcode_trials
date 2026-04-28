/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int exists[101]={0};
    int* res=calloc(2,sizeof(int));
    *returnSize=2;

    for(int i=0;i<nums1Size;i++)
        exists[nums1[i]]+=1;
    
    int count=0;
    for(int i=0;i<nums2Size;i++){
        if(exists[nums2[i]]>0){
            count++;
            res[0]+=exists[nums2[i]];
            exists[nums2[i]]=-1;
        }else if(exists[nums2[i]]==-1)
            count++;
    }
    res[1]=count;
    return res;
}
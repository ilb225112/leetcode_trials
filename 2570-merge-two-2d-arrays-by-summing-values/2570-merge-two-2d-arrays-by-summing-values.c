/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** mergeArrays(int** nums1, int nums1Size, int* nums1ColSize, int** nums2, int nums2Size, int* nums2ColSize, int* returnSize, int** returnColumnSizes) {
    int** res=malloc(sizeof(int*)*(nums1Size+nums2Size));
    *returnSize=0;

    int p=0,q=0,idx=0;
    while(p<nums1Size && q<nums2Size){
        res[idx]=malloc(sizeof(int)*2);
        if(nums1[p][0]==nums2[q][0]){
            res[idx][0]=nums1[p][0];
            res[idx][1]=nums1[p][1]+nums2[q][1];
            p++;q++;
        }else if(nums1[p][0]<nums2[q][0]){
            res[idx][0]=nums1[p][0];
            res[idx][1]=nums1[p][1];
            p++;
        }else{
            res[idx][0]=nums2[q][0];
            res[idx][1]=nums2[q][1];
            q++;
        }
        idx++;
    }
    while(p<nums1Size){
        res[idx]=malloc(sizeof(int)*2);
        res[idx][0]=nums1[p][0];
        res[idx][1]=nums1[p][1];
        p++;idx++;
    }

    while(q<nums2Size){
        res[idx]=malloc(sizeof(int)*2);
        res[idx][0]=nums2[q][0];
        res[idx][1]=nums2[q][1];
        q++;idx++;
    }

    *returnSize=idx;
    *returnColumnSizes=malloc(sizeof(int)*idx);
    for(int i=0;i<idx;i++){
        (*returnColumnSizes)[i]=2;
    }

    return res;
}
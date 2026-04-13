/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    bool isPresent[51]={0};
    int* res=malloc(sizeof(int)*ASize);
    *returnSize=ASize;

    int count=0;
    for(int i=0;i<ASize;i++){
        if(isPresent[A[i]])
            count++;
        else
            isPresent[A[i]]=1;

        if(isPresent[B[i]])
            count++;
        else
            isPresent[B[i]]=1;
        res[i]=count;
    }
    return res;
}
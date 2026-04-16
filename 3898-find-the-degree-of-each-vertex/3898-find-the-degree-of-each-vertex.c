/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* res=calloc(matrixSize,sizeof(int));
    *returnSize=matrixSize;

    for(int i=0;i<matrixSize;i++)
        for(int j=i+1;j<matrixSize;j++){
            res[i]+=matrix[i][j];
            res[j]+=matrix[i][j];
        }
    
    return res;
}
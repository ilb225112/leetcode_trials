/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* res=malloc(sizeof(int)*matrixSize);
    *returnSize=matrixSize;

    for(int i=0;i<matrixSize;i++){
        int r=0;
        for(int j=0;j<matrixSize;j++)
            r+=matrix[i][j];
        res[i]=r;
    }
    return res;
}
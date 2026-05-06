/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
char** rotateTheBox(char** boxGrid, int boxGridSize, int* boxGridColSize, int* returnSize, int** returnColumnSizes) {
    int cols=boxGridSize;
    int rows=boxGridColSize[0];

    *returnSize=rows;
    *returnColumnSizes=malloc(sizeof(int)*rows);
        

    char **res=malloc(sizeof(char*)*rows);
    for(int i=0;i<rows;i++){
        (*returnColumnSizes)[i]=cols;
        res[i]=malloc(sizeof(char)*(cols+1));
        memset(res[i], '.', cols);
        res[i][cols]='\0';
    }

    for(int i=0;i<cols;i++){
        int swapPos=rows-1;
        for(int j=rows-1;j>=0;j--){
            if(boxGrid[i][j]=='#'){
                res[swapPos][cols-i-1]='#';
                swapPos--;
            }else if(boxGrid[i][j]=='*'){
                res[j][cols-i-1]='*';
                swapPos=j-1;
            }
        }
    }
    return res;
}
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
    for(int i=0;i<rows;i++){
        (*returnColumnSizes)[i]=cols;
    }

    char **res=malloc(sizeof(char*)*rows);
    for(int i=0;i<rows;i++){
        res[i]=malloc(sizeof(char)*(cols+1));
        for(int j=0;j<cols;j++)
            res[i][j]=boxGrid[cols-1-j][i];
        res[i][cols]='\0';
    }

    for(int j=0;j<cols;j++){
        int swapPos=rows-1;
        for(int i=rows-1;i>=0;i--){
            if(res[i][j]=='*')
                swapPos=i-1;
            else if(res[i][j]=='#'){
                if(swapPos!=i){
                    res[i][j]='.';
                    res[swapPos][j]='#';
                }
                swapPos--;
            }
        }
    }

    return res;
}
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int col=matrixColSize[0];
    bool fr=0,fc=0;

    for(int i=0;i<col;i++)
        if(!matrix[0][i]){
            fr=1;
            break;
        }

    for(int j=0;j<matrixSize;j++)
        if(!matrix[j][0]){
            fc=1;
            break;
        }

    for(int i=1;i<matrixSize;i++){
        for(int j=1;j<col;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }

    for(int j=1;j<matrixSize;j++){
        if(matrix[j][0]==0){
            for(int i=1;i<col;i++)
                matrix[j][i]=0;
        }
    }

    
    for(int j=1;j<col;j++){
        if(matrix[0][j]==0){
            for(int i=1;i<matrixSize;i++)
                matrix[i][j]=0;
        }
    }

    if(fr)
        for(int i=0;i<col;i++)
            matrix[0][i]=0;
    if(fc)
        for(int j=0;j<matrixSize;j++)
            matrix[j][0]=0;

}

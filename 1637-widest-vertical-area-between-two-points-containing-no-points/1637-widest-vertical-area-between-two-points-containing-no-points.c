int cmp(const void*a, const void* b){
    int x1=(*(int**)a)[0];
    int x2=(*(int**)b)[0];
    
    if(x1>x2) return 1;
    return -1;
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    qsort(points,pointsSize,sizeof(int*),cmp);
    int res=0;

    for(int i=1;i<pointsSize;i++){
        int diff=points[i][0]-points[i-1][0];
        if(diff>res) 
            res=diff;     
    }
    return res;
}
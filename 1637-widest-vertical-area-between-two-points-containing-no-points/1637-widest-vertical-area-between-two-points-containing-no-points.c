int cmp(const void*a, const void* b){
    int* p1=*(int**)a;
    int* p2=*(int**)b;

    if(p1[0]>p2[0]) return 1;
    return -1;
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    qsort(points,pointsSize,sizeof(int*),cmp);
    int res=0;

    for(int i=1;i<pointsSize;i++){
        res=fmax(res,points[i][0]-points[i-1][0]);
    }
    return res;
}
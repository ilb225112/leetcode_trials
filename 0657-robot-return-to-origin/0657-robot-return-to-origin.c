bool judgeCircle(char* moves) {
    int dx[4]={0,-1,1,0};
    int dy[4]={1,0,0,-1};
    int x=0,y=0;

    while(*moves){
        int idx=*moves % 5;
        x+=dx[idx];
        y+=dy[idx];
        moves++;
    }
    return !(x|y);
}
bool judgeCircle(char* moves) {
    int x=0,y=0;
    while(*moves){
        if(*moves &1) y++;
        else{
            char ch=*moves;
            if(ch==68) y--;
            else if(ch==76) x--;
            else x++;
        }
        moves++;
    }
    return !(x|y);
}
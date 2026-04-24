int furthestDistanceFromOrigin(char* moves) {
    int count=0,dcnt=0;
    while(*moves){
        if(*moves=='_') dcnt++;
        else count+=(79 - *moves)/3;
        moves++;
    }
    
    return abs(count)+dcnt;
}
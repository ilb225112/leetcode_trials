int furthestDistanceFromOrigin(char* moves) {
    int count=0,dcnt=0;
    while(*moves){
        if(*moves=='L') count++;
        else if(*moves=='R') count--;
        else dcnt++;
        moves++;
    }
    
    return abs(count)+dcnt;
}
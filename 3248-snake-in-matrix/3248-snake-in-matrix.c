int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int pos=0;
    for(int k=0;k<commandsSize;k++){
        if(commands[k][0]=='R') pos +=1;
        else if(commands[k][0]=='L') pos -=1;
        else if(commands[k][0]=='U') pos -=n;
        else pos +=n;
    }
    return pos;
}
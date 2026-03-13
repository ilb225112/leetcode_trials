int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int i=0,j=0;
    for(int k=0;k<commandsSize;k++){
        if(commands[k][0]=='R') j++;
        else if(commands[k][0]=='L') j--;
        else if(commands[k][0]=='U') i--;
        else i++;
    }
    return i*n+j;
}
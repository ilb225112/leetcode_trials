char* removeTrailingZeros(char* num) {
    int len=strlen(num)-1;
    while(len>0 && num[len]=='0') len--;
    num[++len]='\0';

    return num;
}
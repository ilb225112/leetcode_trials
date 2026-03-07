int scoreOfString(char* s) {
    int res=0;
    int len=strlen(s)-1;
    for(int i=0;i<len;i++){
        res+=abs(*(s+i) - *(s+i+1));
    }
    return res;
}
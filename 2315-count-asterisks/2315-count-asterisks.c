int countAsterisks(char* s) {
    int res=0;
    bool cnt=0;
    while(*s){
        if(*s=='|')
            cnt=!cnt;
        if(*s=='*' && cnt==0)
            res++;
        s++;
    }
    return res;
}
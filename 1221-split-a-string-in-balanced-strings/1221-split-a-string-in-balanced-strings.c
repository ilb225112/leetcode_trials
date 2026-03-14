int balancedStringSplit(char* s) {
    int res=0,temp=0;
    while(*s){
        temp+=(*s=='L')?1:-1;
        if(temp==0) res++;
        s++;
    }
    return res;
}
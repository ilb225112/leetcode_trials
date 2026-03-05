int minOperations(char* s) {
    int res=0,res1=0;
    int len  = strlen(s);

    for(int i=0;i<len;i++){
        if((s[i]-'0')%2==(i%2)){
            res1++;
        }else{
            res++;
        }
    }
    return fmin(res,res1);
}
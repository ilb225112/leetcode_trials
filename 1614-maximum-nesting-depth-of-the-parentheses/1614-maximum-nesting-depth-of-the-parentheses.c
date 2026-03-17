int maxDepth(char* s) {
    int res=0,max=0;
    while(*s){
        if(*s=='(')
            res++;
        else if(*s==')'){
            max=fmax(max,res);
            res--;
        }
        s++;
    }
    max=fmax(res,max);
    return max;
}
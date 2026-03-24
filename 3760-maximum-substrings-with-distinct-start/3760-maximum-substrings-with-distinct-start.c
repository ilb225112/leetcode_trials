int maxDistinct(char* s) {
    int mask=0;
    int res=0;

    while(*s){
        int bit=1 << (*s-'a');
        if(!(mask & bit)){
            mask|=bit;
            res++;
        }
        s++;
        if(res==26) return res;
    }
    return res;
}
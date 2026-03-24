int maxDistinct(char* s) {
    bool uniq[26]={0};
    int res=0;

    while(*s){
        if(!uniq[*s-'a']){
            uniq[*s-'a']=1;
            res++;
        }
        s++;
    }
    return res;
}
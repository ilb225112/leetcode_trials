char* reverseByType(char* s) {
    int l=strlen(s);
    char *p=s,*q=s+l-1;
    while(p<q){
        if(*p>='a' && *q>='a'){
            *p=*p ^ *q;
            *q=*p ^ *q;
            *p=*p ^ *q;
            p++;q--;
        }else if(*p<'a')
            p++;
        else 
            q--;
    }
    p=s,q=s+l-1;
    while(p<q){
        if(*p<'a' && *q<'a'){
            *p=*p ^ *q;
            *q=*p ^ *q;
            *p=*p ^ *q;
            p++;q--;
        }else if(*p>='a')
            p++;
        else
            q--;
    }
    return s;

}
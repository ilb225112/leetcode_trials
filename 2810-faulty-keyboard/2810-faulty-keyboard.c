void rev(char* st,char* lt){
    while(st<lt){
        *st = *st ^ *lt;
        *lt = *st ^ *lt;
        *st = *st ^ *lt;
        st++;lt--;
    }
}

char* finalString(char* s) {
    int l1=strlen(s);
    char* res = malloc(l1+1);
    char* st = res,*ed=res;

    int idx=0;
    while(*s){
        if(*s=='i')
            rev(st,ed-1);
        else{
            res[idx++]=*s;
            ed++;
        }
        s++;
    }
    res[idx]='\0';
    return res;
}
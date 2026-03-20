char* replaceDigits(char* s) {
    char *p=s;
    while(*p && *(p+1)) {
        *(p+1)=*p+*(p+1)-'0';
        p=p+2;
    }
    return s;
}
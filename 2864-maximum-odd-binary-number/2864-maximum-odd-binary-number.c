char* maximumOddBinaryNumber(char* s) {
    char* st=s,*end=s;
    while(*end){
        if(*st=='0' && *end=='1'){
            *st='1';*end='0';
        }
        if(*st=='1') st++;
        end++;
    }
    if(st!=s) *(st-1)='0';
    *(end-1)='1';
    return s;
}
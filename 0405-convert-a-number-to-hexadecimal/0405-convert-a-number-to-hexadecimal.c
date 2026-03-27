char* toHex(int num) {
    if(num==0) return "0";
    unsigned int n = (unsigned) num;

    char map[]="0123456789abcdef";
    char* res=malloc(9);
    res[8]='\0';
    int i=7;

    while(n!=0){
        res[i--] = map[n & 0xf];
        n>>=4;
    }
    return res+i+1;
}
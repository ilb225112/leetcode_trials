void toBinary(int n, char *s) {
    if (n==0) {
        s[0]='0';
        s[1]='\0';
        return;
    }
    int bits=(int)log2(n);
    int i=0;
    for(int k=bits; k >=0; k--) {
        s[i++] =((n>>k)&1)+'0';
    }
    s[i]='\0';
}

char* convertDateToBinary(char* date) {
    char* res = malloc(40*sizeof(char));
    int y, m, d;
    sscanf(date, "%d-%d-%d", &y, &m, &d);

    char by[20], bm[10], bd[10];
    toBinary(y, by);
    toBinary(m, bm);
    toBinary(d, bd);
    sprintf(res, "%s-%s-%s", by, bm, bd);

    return res;
}
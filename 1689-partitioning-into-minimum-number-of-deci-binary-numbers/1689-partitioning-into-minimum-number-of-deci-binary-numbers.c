int minPartitions(char* n) {
    int res=0;
    int len= strlen(n);

    for(int i=0;i<len;i++)
        res=fmax(res,n[i]-'0');
    return res;
}
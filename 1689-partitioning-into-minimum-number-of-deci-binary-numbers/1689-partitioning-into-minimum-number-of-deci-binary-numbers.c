int minPartitions(char* n) {
    int res=0;
    int len= strlen(n);

    for(int i=0;i<len;i++){
        res=(n[i]-'0'>res)?n[i]-'0':res;
        if(res==9) return 9;
    }
    return res;
}
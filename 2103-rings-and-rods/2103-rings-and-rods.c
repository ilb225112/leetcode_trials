int countPoints(char* rings) {
    int len=strlen(rings);
    int cnt[10]={0};
    for(int i = 0;i<len;i+=2){
        char c = rings[i];
        int dig=rings[i+1]-'0';
        cnt[dig]|=(1<<(c%3));
    }
    int res=0;
    for(int i=0;i<10;i++)
        if(cnt[i]==7) res++;

    return res;
}
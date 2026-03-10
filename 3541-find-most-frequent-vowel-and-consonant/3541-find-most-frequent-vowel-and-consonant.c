int maxFreqSum(char* s) {
    int* cnt=calloc(26,sizeof(int));
    int len=strlen(s);

    for(int i=0;i<len;i++){
        cnt[s[i]-'a']++;
    }

    int maxc=0,maxo=0;
    for(int i=0;i<26;i++){
        if(i==0||i==4||i==8||i==14||i==20)
            maxo=(maxo+cnt[i]+abs(maxo-cnt[i]))/2;
        else
            maxc=(maxc+cnt[i]+abs(maxc-cnt[i]))/2;
    }
    free(cnt);
    cnt=NULL;
    return maxc+maxo;
}
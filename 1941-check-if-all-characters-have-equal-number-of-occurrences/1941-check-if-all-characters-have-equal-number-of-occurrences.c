bool areOccurrencesEqual(char* s) {
    int cnt[26]={0};
    while(*s){
        cnt[*s-'a']++;
	    s++;
    }
    int res=0,i=0;
    while(i<26 && !cnt[i]) i++;
    res=cnt[i];
    for(;i<26;i++) if(cnt[i]!=res && cnt[i]!=0) return 0;
    return 1;
}
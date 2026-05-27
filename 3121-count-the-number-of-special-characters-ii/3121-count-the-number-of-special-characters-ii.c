#define FOR(i) for(int i=0;i<26;i++)

int numberOfSpecialChars(char* word) {
    int fidx[26];
    int lidx[26];
    int count=0;

    FOR(i){
        fidx[i]=-1;
        lidx[i]=-1;
    }

    int len=strlen(word);
    for(int i=0;i<len;i++){
        char ch=word[i];
        if(ch<='Z'&& fidx[ch-'A']==-1) fidx[ch-'A']=i; 
        else if(ch>='a') lidx[ch-'a']=i; 
    }

    FOR(i)
        count+=(lidx[i]!=-1 && fidx[i]!=-1 && lidx[i]<fidx[i]);

    return count;
}
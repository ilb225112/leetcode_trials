bool match(char* a, char* b){
    int n=strlen(a);
    if(n !=strlen(b)) return 0;
    for(int i=0;i<n;i++) {
        if(a[i]!=b[n-1-i]) return 0;
    }
    return 1;
}

int maximumNumberOfStringPairs(char** words, int wordsSize) {
    int res=0;
    bool* idx=calloc(wordsSize+1,sizeof(bool));
    for(int i=0;i<wordsSize ;i++){
        if(idx[i]) continue;
        for(int j=i+1;j<wordsSize ;j++){
            if(idx[j]) continue;
            if(match(words[i],words[j])){
                idx[i]=1;
                idx[j]=1;
                res++;
                break;
            }
        }
    }
    return res;
}
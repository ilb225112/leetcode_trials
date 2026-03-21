bool match(char* a, char* b){
    if(*a != *(b+1)) return 0;
    if(*(a+1)!=*b) return 0;
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
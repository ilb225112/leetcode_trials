bool match(char* a, char* b){
    return (*a==*(b+1) && *(a+1) == *b);
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
    free(idx);
    return res;
}
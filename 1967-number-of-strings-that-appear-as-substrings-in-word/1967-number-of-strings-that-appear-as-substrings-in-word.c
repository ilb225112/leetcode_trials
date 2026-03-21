int numOfStrings(char** patterns, int patternsSize, char* word) {
    int res=0;
    for(int i=0;i<patternsSize;i++){
        char *p = patterns[i];
        if(strstr(word,p)!=NULL) res++;
    }
    return res;
}
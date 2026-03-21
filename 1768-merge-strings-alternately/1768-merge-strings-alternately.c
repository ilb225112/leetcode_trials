char * mergeAlternately(char * word1, char * word2){
    int l1=strlen(word1),l2=strlen(word2);
    char* res=malloc(l1+l2+1);
    int idx=0;

    while(*word1 || *word2){
        if(*word1) res[idx++] = *word1++;
        if(*word2) res[idx++] = *word2++;
    }

    res[idx] = '\0';
    return res;
}
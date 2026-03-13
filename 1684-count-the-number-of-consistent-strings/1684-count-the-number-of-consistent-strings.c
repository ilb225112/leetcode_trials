int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int count=0;
    bool isa[27]={0};
    while(*allowed)
        isa[*allowed++ -'a']=1;
    for(int i=0;i<wordsSize;i++){
        int l1=strlen(words[i]),j=0;
        for(;j<l1;j++){
            if(!isa[words[i][j]-'a'])
                break;
        }
        if(j==l1) count++;
    }
    return count;
}
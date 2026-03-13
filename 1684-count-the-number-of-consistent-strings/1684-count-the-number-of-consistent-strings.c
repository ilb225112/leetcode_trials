int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int count=0,mask=0;

    while(*allowed)
        mask|=1<<(*allowed++ -'a');

    for(int i=0;i<wordsSize;i++){
        char *p = words[i];
        while(*p){
            if(!(mask&(1 << (*p - 'a'))))
                break;
            p++;
        }
        if(!*p)
            count++;
    }
    return count;
}
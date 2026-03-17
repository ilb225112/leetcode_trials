int prefixCount(char** words, int wordsSize, char* pref) {
    int count=0;
    for(int i=0;i<wordsSize;i++){
        char* p =words[i];
        char* q= pref;
        while(*q){
            if(*q!=*p) break;
            q++;p++;
        }
        if(!*q) count++;
    }
    return count;
}
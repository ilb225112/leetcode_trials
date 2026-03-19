bool isAcronym(char** words, int wordsSize, char* s) {
    int count=0;
    while(*s && count<wordsSize){
        if(*s != (*words)[0]) return false;
        s++;words++;count++;
    }
    return !((count^wordsSize) || *s);
}
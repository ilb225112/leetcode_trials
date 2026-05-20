int firstMatchingIndex(char* s) {
    char* st=s;
    char *end=s;
    while(*end) end++;
    end--;

    while(st<=end){
        if(*st==*end) return st-s;
        st++;
        end--;
    }
    return -1;
}
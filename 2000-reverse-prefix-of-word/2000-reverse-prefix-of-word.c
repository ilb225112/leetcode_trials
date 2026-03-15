char* reversePrefix(char* word, char ch) {
    char *p=word;
    while(*p && *p!=ch)
        p++;
    if(!*p) return word;
    for(int i=0;word+i < p;i++){
        word[i]=word[i]^(*p);
        *p = word[i]^(*p);
        word[i]=word[i]^(*p);
        p--;
    }
    return word;
}
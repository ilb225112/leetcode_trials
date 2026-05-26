int numberOfSpecialChars(char* word) {
    int lcount=0;
    int ucount=0;

    while(*word){
        char ch=*word;
        if(ch>=97)
            lcount |=(1<<(ch-'a'));
        else
            ucount|=(1<<(ch-'A'));
        word++;
    }

    return __builtin_popcount(lcount & ucount);
}
int numberOfSpecialChars(char* word) {
    int caps=0;
    int small=0;
    int invalid=0;

    while(*word){
        char ch=*word;

        if(ch<='Z') caps|=(1<<(ch-'A'));
        else 
            if(caps &(1<<(ch-'a'))) invalid|=(1<<(ch-'a'));
            else 
                small|=(1<<(ch-'a'));  
        word++;
    }
    return __builtin_popcount(caps&small&(~invalid));
}
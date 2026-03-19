int canBeTypedWords(char* text, char* brokenLetters) {
    bool broke[26]={0};
    while(*brokenLetters){
        broke[*brokenLetters - 'a']=1;
        brokenLetters++;
    }
    int count=0;
    bool f=0;
    while(*text){
        if(*text==' '){
            if(!f) count++;
            f=0; 
        }else if(broke[*text-'a']){
            f=1;
            while(*text!=' ' && *text!='\0') 
                text++;
            continue;
        }
        text++;
    }
    if(f==0) count++;
    return count;
}
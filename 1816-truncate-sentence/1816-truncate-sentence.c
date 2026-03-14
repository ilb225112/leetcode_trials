char* truncateSentence(char* s, int k) {
    int count=0;
    for(int i=0;s[i];i++){
        if(s[i]==' ')
            count++;
        if(count==k){ 
            s[i]='\0';
            return s;
        }
    }
    return s;
}
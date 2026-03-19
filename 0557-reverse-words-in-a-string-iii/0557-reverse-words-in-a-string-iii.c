void rev(char* word,int len){
    for(int i=0;i<len/2;i++){
        char temp = word[i];
        word[i]=word[len-i-1];
        word[len-i-1]=temp;
    }
}

char* reverseWords(char* s) {
    int len=strlen(s),start=0;

    for(int i=0;i<=len;i++){
        if(*(s+i)==' ' || *(s+i)=='\0'){
            rev((s+start),i-start);
            start=i+1;
        }
    }
    return s;
}
bool isPalindrome(char* str){
    int l=0, r=strlen(str)-1;
    while(l<r){
        if(str[l]!=str[r])
            return 0;
        l++;r--;
    }
    return 1;
}

char* firstPalindrome(char** words, int wordsSize) {
    for(int i=0;i<wordsSize;i++){
        if(isPalindrome(words[i]))
            return words[i];
    }
    return "";
}
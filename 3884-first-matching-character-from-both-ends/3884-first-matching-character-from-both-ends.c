int firstMatchingIndex(char* s) {
    int len=strlen(s);
    int l1=len>>1;

    for(int i=0;i<l1;i++){
        if(s[i]==s[len-i-1]) return i;
    }
    return (len&1)?l1:-1;
}
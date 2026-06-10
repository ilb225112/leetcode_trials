int countKeyChanges(char* s) {
    int len=strlen(s);
    int count=0;

    for(int i=0;i<len-1;i++)
        if((s[i]|32) != (s[i+1] |32)) count++;

    return count;
}
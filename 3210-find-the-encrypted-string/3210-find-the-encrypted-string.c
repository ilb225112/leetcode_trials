char* getEncryptedString(char* s, int k) {
    int len=strlen(s);
    char* res = malloc(len+1);

    for(int i=0;i<len;i++)
        res[i]=s[(i+k)%len];
    res[len]='\0';

    return res;
}
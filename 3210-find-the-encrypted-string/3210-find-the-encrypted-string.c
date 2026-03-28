void reverse(char *s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

char* getEncryptedString(char* s, int k) {
    int n=strlen(s);
    k%=n;

    reverse(s,0,k-1);     
    reverse(s,k,n-1);     
    reverse(s,0,n-1);  
    return s;
}
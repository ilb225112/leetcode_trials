char* reversePrefix(char* s, int k) {
    if(k==1) return s;
    int i=0;k--;
    while(i<k){
        s[i]=s[i]^s[k];
        s[k]=s[i]^s[k];
        s[i]=s[i]^s[k];
        k--;i++;
    }       
    return s;
}
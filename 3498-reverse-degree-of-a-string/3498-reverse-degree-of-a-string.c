int reverseDegree(char* s) {
    int res=0,l=strlen(s);
    for(int i=0;i<l;i++)
        res+=(26-s[i]+'a')*(i+1);
    return res;
}
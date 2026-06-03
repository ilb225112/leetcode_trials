char* freqAlphabets(char* s) {
    int len=strlen(s);
    char* res=malloc(sizeof(char)*(len+1));
    res[len]='\0';
    int idx=len-1;

    for(int i=len-1;i>=0;i--){
        if(s[i]=='#'){
            int dig=(s[i-1]-'0')+(s[i-2]-'0')*10;
            res[idx]=dig-10+'j';
            i-=2;
        }else{
            res[idx]=s[i]-'1'+'a';
        }
        idx--;
    }
    res=res+idx+1;
    return res;
}
char* processStr(char* s) {
    int len = strlen(s);
    int flen=0;
    for(int i=0;i<len;i++) 
        if(s[i]=='#')   flen*=2;
        else flen+=1;

    char* res = malloc(sizeof(char) * (flen+1));
    int idx = 0;

    for (int i=0;i<len;i++){
        char ch=s[i];
        if (ch=='*'){
            if (idx>0) idx--;
        } 
        else if(ch=='#'){
            int curr_len = idx;
            memmove(res+idx,res,curr_len);
            idx+=curr_len;
        }else if(ch=='%'){
            for (int j = 0; j < idx / 2; j++) {
                char temp=res[idx-j-1];
                res[idx-j-1]=res[j];
                res[j] = temp;
            }
        } else
            res[idx++] = ch;
    }
    
    res[idx] = '\0';
    return res;
}
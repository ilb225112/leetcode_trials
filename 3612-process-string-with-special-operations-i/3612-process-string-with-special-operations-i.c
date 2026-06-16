char* processStr(char* s) {
    int len = strlen(s);
    char* res = malloc(sizeof(char) * 600000);
    int idx = 0;

    for (int i=0;i<len;i++){
        char ch=s[i];
        if (ch=='*'){
            if (idx>0) idx--;
        } 
        else if(ch=='#'){
            int curr_len = idx;
            for (int j = 0; j < curr_len; j++)
                res[idx++] = res[j];
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
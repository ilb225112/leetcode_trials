char* clearDigits(char* s) {
    int top =0;

    for (int i=0;s[i];i++) {
        if (*(s+i)>='0' && *(s+i)<='9') {
            if (top>0) 
                top--;   
        }else{
            *(s+top)=*(s+i);   
            top++;   
        }
    }

    *(s+top) ='\0';
    return s;
}
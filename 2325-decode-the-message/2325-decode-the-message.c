char* decodeMessage(char* key, char* message) {
    int msg[26]={0};
    for(int i='a';i<='z';i++){
        if(*key==' ') {i--;key++;continue;}
        if(!msg[*key-'a']) msg[*key-'a']=i;
        else i--;
        key++;
    }

    int len=strlen(message);
    for(int i=0;i<len;i++){
        if(message[i]==' ') continue;
        message[i]=msg[message[i]-'a'];
    }
    return message;
}
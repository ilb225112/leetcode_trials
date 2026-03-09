char * defangIPaddr(char * address){
    int len=strlen(address),count=0;
    char* res = malloc((len+7)*sizeof(char));


    for(int i=0;i<len;i++){
        res[count++]=address[i];
        if(i<len-1 && address[i+1]=='.'){
            res[count++]='[';
            res[count++]='.';
            res[count++]=']';
            i++;
        }
    }
    res[count]='\0';
    return res;
}
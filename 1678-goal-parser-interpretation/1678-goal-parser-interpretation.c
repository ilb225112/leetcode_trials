char * interpret(char * c){
    int l1=strlen(c);
    char* res=calloc(l1+1,sizeof(char));
    int idx=0;

    for(int i=0;i<l1;i++){
        if(c[i]=='G')
            res[idx++]='G';
        else if(c[i]=='(' && c[i+1]==')'){
            res[idx++]='o';
            i++;
        }else{
            res[idx++]='a';
            res[idx++]='l';
            i+=3;
        }
    }
    res[idx]='\0';
    return res;
}
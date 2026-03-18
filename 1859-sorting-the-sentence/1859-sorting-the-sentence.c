char * sortSentence(char * s){
    int arr[10], idx=0,k;
    for(int i=0;i<10;i++)
        arr[i]=-1;

    for(k=0;s[k];k++){
        if(s[k]>='1' && s[k]<='9'){
            arr[s[k]-'0']=idx;
            idx = k+2;
        }
    }

    char* res=malloc(sizeof(char)*(k+1));
    idx=0;
    for(int i=1;i<10;i++){
        if(arr[i]==-1) 
            continue;

        int j=arr[i];
        while(s[j] && s[j]!='0'+i){
            res[idx++]=s[j++];
        }
        res[idx++]=' ';
    }
    res[idx-1]='\0';
    return res;
}
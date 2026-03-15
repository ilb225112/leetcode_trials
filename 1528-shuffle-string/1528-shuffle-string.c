char* restoreString(char* s, int* indices, int indicesSize) {
    char* res=(char*)malloc(sizeof(char)*(indicesSize+1));

    for(int i=0;i<indicesSize;i++){
        res[indices[i]]=s[i];
    }
    res[indicesSize]='\0';
    return res;
}
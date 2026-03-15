char* restoreString(char* s, int* indices, int indicesSize) {
    // cyclic sorting
    for(int i=0;i<indicesSize;i++){
        while(indices[i]!=i){
            int j=indices[i];
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;

            int t=indices[i];
            indices[i]=indices[j];
            indices[j]=t;
        }
    }
    return s;
}
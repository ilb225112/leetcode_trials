char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char* res= calloc(wordsSize+1,sizeof(char));
    for(int i=0;i<wordsSize;i++){
        char* p = words[i];
        int sum=0;
        while(*p){
            sum+=weights[*p-'a'];
            p++;
        }
        sum%=26;
        res[i]='a'+25-sum;
    }
    res[wordsSize]='\0';
    return res;
}
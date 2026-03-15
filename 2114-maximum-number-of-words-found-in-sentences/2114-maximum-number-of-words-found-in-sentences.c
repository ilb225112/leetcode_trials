int mostWordsFound(char** sentences, int sentencesSize) {
    int wc=1,res=1;
    for(int i=0;i<sentencesSize;i++){
        char* p=sentences[i];
        wc=1;
        while(*p){
            if(*p==' ') wc++;
            p++;
        }
        res = (res+wc+abs(res-wc))>>1;
    }
    return res;
}
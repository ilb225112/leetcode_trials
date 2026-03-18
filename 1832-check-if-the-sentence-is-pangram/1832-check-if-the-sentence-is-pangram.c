bool checkIfPangram(char* sentence) {
    bool alpha[26]={0};
    int count=0;

    while(*sentence){
        if(*sentence!=' ' && !alpha[*sentence - 'a']){
            alpha[*sentence - 'a']=1;
            count+=1;
        }
        sentence++;
    }
    return !(count^26);
}
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("abm,avx,avx2,bmi,bmi2,fma,popcnt,lzcnt,tune=znver5")
#endif

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int count=0,mask=0;

    while(*allowed)
        mask|=1<<(*allowed++ -'a');

    for(int i=0;i<wordsSize;i++){
        int l1=strlen(words[i]),j=0;
        for(;j<l1;j++){
            if(!(mask & (1 << (words[i][j]- 'a'))))
                break;
        }
        if(j==l1) count++;
    }
    return count;
}
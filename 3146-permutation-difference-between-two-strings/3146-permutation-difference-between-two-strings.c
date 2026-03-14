int findPermutationDifference(char* s, char* t) {
    int idx[26]={0};
    int l1=strlen(s), l2=strlen(t), res=0;
    for(int i=0;i<l1;i++)
        idx[s[i]-'a']=i;
    for(int i=0;i<l2;i++){
        res+= abs(i - idx[t[i]-'a']);
    }
    return res;
}
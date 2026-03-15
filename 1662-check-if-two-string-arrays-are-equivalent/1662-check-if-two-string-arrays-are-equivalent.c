bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    char s1[1001]="",s2[1001]="";
    for(int i=0;i<word1Size;i++)
        strcat(s1,word1[i]);
    for(int i=0;i<word2Size;i++)
        strcat(s2,word2[i]);
    return !strcmp(s1,s2);
}
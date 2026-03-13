/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* res= malloc(wordsSize*sizeof(int));
    *returnSize=0;

    for(int i=0;i<wordsSize;i++){
        int len=strlen(words[i]);
        for(int j=0;j<len;j++){
            if(words[i][j]==x){
                res[(*returnSize)++]=i;
                break;
            }
        }
    }
    return res;
}
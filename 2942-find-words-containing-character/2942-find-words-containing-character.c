/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* res= malloc(wordsSize*sizeof(int));
    *returnSize=0;

    for(int i=0;i<wordsSize;i++){
            if(strchr(words[i],x)){
                res[(*returnSize)++]=i;
            }
        }
    return res;
}
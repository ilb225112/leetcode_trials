/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* s, int* returnSize) {
    int len = strlen(s);
    int* res=malloc(sizeof(int)*(len+2));
    *returnSize = 0;

    int l=0,h=len;
    while(*s){
        if(*s=='I'){
            res[(*returnSize)++]=l++;
        }else
            res[(*returnSize)++]=h--;
        s++;
    }
    res[(*returnSize)++]=h;
    return res;
}
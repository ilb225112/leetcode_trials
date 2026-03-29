/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
    int len=strlen(s);
    *returnSize=len;
    int* res=malloc(sizeof(int)*len);

    int idx=len;
    for(int i=0;i<len;i++){
        if (s[i]==c)
            idx=i;
        res[i]=abs(i-idx);
    }

    for(int i=len-1;i>=0;i--){
        if(s[i]==c)
            idx=i;
        res[i]=fmin(res[i],abs(i-idx));
    }
    return res;
}
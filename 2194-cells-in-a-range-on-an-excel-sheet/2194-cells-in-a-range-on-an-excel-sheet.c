/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** cellsInRange(char* s, int* returnSize) {
    int len=strlen(s);
    char ch1=s[0],ch2=s[len-2],num2=s[len-1],num1=s[1];
    char** res=malloc(sizeof(char*)*(ch2-ch1+1)*(num2-num1+1));
    *returnSize=0;

    for(char ch=ch1;ch<=ch2;ch++){
        for(char n = num1;n<=num2;n++){
            res[*returnSize] = malloc(3 *sizeof(char));
            res[*returnSize][0]=ch;
            res[*returnSize][1]=n;
            res[*returnSize][2]='\0';
            (*returnSize)++;
        }
    }
    return res;
}
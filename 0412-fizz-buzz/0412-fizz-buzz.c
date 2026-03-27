/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** res = calloc(n, sizeof(char*));
    for(int i=0;i<n;i++){
        if((i+1)%3==0 && (i+1)%5==0){
            res[i]=malloc(sizeof(char)*10);
            strcpy(res[i],"FizzBuzz");
        }else if((i+1)%3==0){
            res[i]=malloc(sizeof(char)*5);
            strcpy(res[i],"Fizz");
        }else if((i+1)%5==0){
            res[i]=malloc(sizeof(char)*5);
            strcpy(res[i],"Buzz");
        }else{
            res[i]=calloc(6,sizeof(char));
            sprintf(res[i], "%d", i+1);
        }
    }
    *returnSize=n;
    return res;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** res = malloc(n * sizeof(char*));
    *returnSize = n;

    for(int i = 0; i < n; i++) {
        res[i] = malloc(6);
        sprintf(res[i], "%d", i + 1);
    }

    for(int i = 2; i < n; i += 3) {
        free(res[i]);
        res[i] = malloc(5);
        strcpy(res[i], "Fizz");
    }

    for(int i = 4; i < n; i += 5) {
        free(res[i]);
        res[i] = malloc(5);
        strcpy(res[i], "Buzz");
    }

    for(int i = 14; i < n; i += 15) {
        free(res[i]);
        res[i] = malloc(9);
        strcpy(res[i], "FizzBuzz");
    }

    return res;
}
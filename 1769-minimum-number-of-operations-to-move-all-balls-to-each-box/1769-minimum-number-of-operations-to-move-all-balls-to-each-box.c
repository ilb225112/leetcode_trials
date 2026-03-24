/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minOperations(char* boxes, int* returnSize) {
    int n=strlen(boxes);
    *returnSize =n;

    int* res =calloc(n, sizeof(int));
    int count =0;
    int ops =0;

    for (int i=0;i<n;i++){
        res[i] +=ops;
        if (boxes[i]=='1') count++;
        ops+=count;
    }

    count = 0;
    ops = 0;
    for (int i=n-1;i>= 0;i--){
        res[i] +=ops;
        if (boxes[i]=='1') count++;
        ops +=count;
    }
    return res;
}
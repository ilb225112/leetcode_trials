/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* arr, int n, int* returnSize) {
    int* res=malloc(sizeof(int)*2);
    *returnSize = 2;
    long long sum =((long long)n*(n+1) )/2;
    long long sqsum =((long long)n*(n+1)*(2LL*n+1))/6;
    for(int i=0;i<n;i++){
        sum-=arr[i];
        sqsum -= (long long)arr[i]*arr[i];
     }
    sqsum = sqsum/sum;
    res[1] =(int) ((sum + sqsum)/2);
    res[0] =  res[1]-(int)sum;
    return res;
}
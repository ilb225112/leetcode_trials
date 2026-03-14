/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a,const void* b){
    int bA = __builtin_popcount(*(int*)a);
    int bB = __builtin_popcount(*(int*)b);
    if(bA == bB ) return *(int*)a-*(int*)b;
    else return bA-bB;
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {
    qsort(arr,arrSize,sizeof(int),compare);
    *returnSize = arrSize;
    return arr;
}
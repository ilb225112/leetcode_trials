/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int min=prices[pricesSize-1];
    *returnSize=pricesSize;

    int stack[500];
    int top=-1;

    for(int i=0;i<pricesSize;i++){
        while(top>=0 && prices[i]<=prices[stack[top]]){
            int idx=stack[top--];
            prices[idx]-=prices[i];
        }
        stack[++top]=i;
    }

    return prices;
}
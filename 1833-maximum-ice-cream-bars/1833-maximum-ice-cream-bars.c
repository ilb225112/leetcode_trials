int comp(const void* a, const void* b){
    int x = *(int*)a;
    int y = *(int*)b;
    return (x>y)-(x<y);
}
int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs,costsSize,sizeof(int),comp);
    int res=0,i=0;
    while(i<costsSize){
        coins-=costs[i++];
        if(coins<0) break; 
        res++;
    }
    return res;
}
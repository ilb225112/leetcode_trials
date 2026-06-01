int comp(const void* a, const void *b){
    return *(int*)a-*(int*)b;
}

int minimumCost(int* cost, int costSize) {
    qsort(cost,costSize,sizeof(int),comp);
    int res=0;
    for(int i=costSize-1;i>=0;i-=3){
        res += cost[i];
        if(i-1>=0) res+=cost[i-1];
    }
    return res;
}
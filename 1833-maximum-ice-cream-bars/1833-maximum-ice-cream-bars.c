int maxIceCream(int* costs, int costsSize, int coins) {
    int res=0;
    int max=costs[0],min=costs[0];
    for(int i=1;i<costsSize;i++){
        if(max<costs[i]) max=costs[i];
        if(min>costs[i]) min=costs[i];
    }
    
    int range=max-min+1;
    int* freq=calloc(range,sizeof(int));

    for(int i=0;i<costsSize;i++)
        freq[costs[i]-min]++;
    
    for(int i=0;i<range;i++){
        while(freq[i]>0 && coins>=(i+min)){
                coins-=(i+min);
                res++;
                freq[i]--;;
            }
        }
    free(freq);
    return res;
}
int maxProfit(int* prices, int pricesSize) {
    int min=prices[0],profit=0;
    for(int i=1;i<pricesSize;i++){
        profit+=min;
        profit = (profit>prices[i])?profit:prices[i];
        profit-=min;

        min=(min<prices[i])?min:prices[i];
    }
    return profit;
}
int maxProfit(int* p, int pricesSize) {
    int b1=-p[0],s1=INT_MIN,b2=INT_MIN,s2=INT_MIN;

    for(int i=1;i<pricesSize;i++){
        b1=fmax(b1,-p[i]);
        s1=fmax(s1,b1+p[i]);
        b2=fmax(b2,s1-p[i]);
        s2=fmax(s2,b2+p[i]);
    }
    return fmax(0,s2);
}
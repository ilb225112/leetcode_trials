int pivotInteger(int n) {
    int tsum=n*(n+1)>>1;
    int x=sqrt(tsum);
    if(x*x==tsum)
        return x;
    return -1;
}
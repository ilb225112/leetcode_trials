int differenceOfSums(int n, int m) {
    int res=(n*(n+1))/2;
    for(int i=m;i<=n;i+=m){
        res-=i;
        res-=i;
    }
    return res;
}
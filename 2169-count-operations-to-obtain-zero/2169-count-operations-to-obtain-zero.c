int countOperations(int m, int n) {
    int res=0;
    while(m>0 && n>0){
        res+=m/n;
        m%=n;

        int temp=m;
        m=n;
        n=temp;
    }
    return res;
}
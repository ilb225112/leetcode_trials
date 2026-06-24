bool checkGoodInteger(int n) {
    int res=0;
    while(n>0){
        int dig=n%10;
        n/=10;
        res+=dig*(dig-1);
    }
    return res>=50;
}
int mirrorDistance(int n) {
    if(n<10) return 0;

    int rev=0,tmp=n;
    while(tmp){
        rev=rev*10 + tmp%10;
        tmp/=10;
    }
    return abs(n-rev);
}
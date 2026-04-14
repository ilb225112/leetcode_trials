int countPrimes(int n) {
    if(n<2) return 0;
    bool* isPrime=calloc(n,sizeof(bool));
    int count=1;

    for(int i=3;i<n;i+=2){
        if(!isPrime[i]){
            count++;
            for(int j=i;j<n;j+=(2*i))
                isPrime[j]=1;
        }
    }
    return count;
}
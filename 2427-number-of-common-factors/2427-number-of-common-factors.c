int commonFactors(int a, int b) {
    int count=0;
    if(a>b) return commonFactors(b,a);

    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            count += (b%i==0);
            int temp=a/i;
            if(temp!=i && b%temp==0) count++;
        }
    }

    return count;
}
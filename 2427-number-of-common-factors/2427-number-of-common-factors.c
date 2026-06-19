int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int commonFactors(int a, int b) {
    int count=0;
    int g=gcd(a,b);

    for(int i=1;i*i<=g;i++){
        if(g%i==0){
            count ++;
            if(i*i !=g) count++;
        }
    }

    return count;
}
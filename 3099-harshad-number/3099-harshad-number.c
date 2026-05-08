int sumOfTheDigitsOfHarshadNumber(int x) {
    if(x<10) return x;

    int temp=x;
    int sum=0;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }

    return (x%sum)?-1:sum;
}
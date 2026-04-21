int countDigits(int num) {
    int temp=num;
    int res=0;

    while(temp>0){
        int d=temp%10;
        if(num%d==0) res++;
        temp/=10;
    }
    
    return res;
}
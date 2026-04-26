int power(int n){
    int res=1,base=10;
    while(n){
        if(n%2) res*=base;
        base*=base;
        n/=2;
    }
    return res;
}

int maximum69Number (int num) {
    int pos=0,pos6=-1;
    int temp=num;
    
    while(temp){
        pos++;
        if(temp%10 == 6)
            pos6=pos;
        temp/=10;
    }
    if(pos6==-1) return num;
    return num+3*power(pos6-1);
}
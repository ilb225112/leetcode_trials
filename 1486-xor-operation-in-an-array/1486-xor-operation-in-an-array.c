int xorTill(int x){
    if(x%4==0) return x;
    if(x%4==1) return 1;
    if(x%4==2) return x+1;
    return 0;
}

int xorOperation(int n, int start) {
    int s=start>>1;      
    int e=s+n-1;

    int res =xorTill(e)^xorTill(s-1);
    res <<= 1;
    if(start & 1 && n & 1) 
        res |= 1;

    return res;
}
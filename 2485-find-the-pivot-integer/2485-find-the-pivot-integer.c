int sum(int x){
    return x*(x+1)>>1;
}

int pivotInteger(int n) {
    int tsum=sum(n);
    int l=1,r=n;
    while(l<=r){
        int mid=l+((r-l)>>1);
        int temp=sum(mid);
        int rsum=tsum-temp+mid;

        if(temp==rsum)
            return mid;
        if(temp>rsum)
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
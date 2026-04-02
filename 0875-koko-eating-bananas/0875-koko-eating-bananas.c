int hours(int* piles,int pilesSize,int hr,int h){
    int total=0;
    for(int i=0;i<pilesSize;i++){
        total += (piles[i]+hr-1)/hr;
        if(total>h) return total;
    }
    return total;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int r=piles[0],l=1;
    for(int i=1;i<pilesSize;i++)
        r=fmax(r,piles[i]);
    
    while(l<=r){
        int mid = l+((r-l)>>1);
        if(hours(piles,pilesSize,mid,h)<=h)
            r=mid-1;
        else
            l=mid+1;
    }
    return l;
}
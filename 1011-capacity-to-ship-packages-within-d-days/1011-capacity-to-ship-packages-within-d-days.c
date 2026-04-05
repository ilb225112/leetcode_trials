bool isPoss(int* weights,int weightsSize,int mid,int days){
    int exp=1,cont=0;
    for(int i=0;i<weightsSize;i++){
        if(cont+weights[i] > mid){
            cont=0;
            exp++;
            if(exp>days) return 0;
        }
        cont+=weights[i];
    } 

    return(exp<=days);
}

int shipWithinDays(int* weights, int weightsSize, int days) {
    if(weightsSize==1) return *weights;
    int l=weights[0],r=weights[0];

    for(int i=1;i<weightsSize;i++){
        if(weights[i]>l) l=weights[i];
        r+=weights[i];
    }
    l=l>(r+days-1)/days ? l : (r+days-1)/days;
    
    if(days==1) return r;

    while(l<=r){
        int mid=l+((r-l)>>1);
        if(isPoss(weights,weightsSize,mid,days))
            r=mid-1;
        else
            l=mid+1;
    }
    return l;
}
bool boqcnt(int* arr, int days, int size, int k, int m) {
    int res = 0, cnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= days) {
            cnt++;
            if (cnt == k) {
                res++;
                cnt = 0;
            }
        }else
            cnt = 0;

        if (res >= m) return true;
    }
    return false;
}

int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    if((long)m*k > bloomDaySize) return -1;
    int l=bloomDay[0],r=bloomDay[0];

    for(int i=1;i<bloomDaySize;i++){
        if(bloomDay[i]<l) l =bloomDay[i];
        if(bloomDay[i]>r) r=bloomDay[i];
    }

    while(l<=r){
        int mid = l+((r-l)>>1); 
        if(boqcnt(bloomDay,mid,bloomDaySize,k,m)){
            r=mid-1;
        }else
            l=mid+1;
    }
    return l;
}
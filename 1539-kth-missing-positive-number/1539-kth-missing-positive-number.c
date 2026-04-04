int findKthPositive(int* arr, int arrSize, int k) {
    int l=0,r=arrSize-1;
    while(l<=r){
        int mid=l+((r-l)>>1);
        int mis=arr[mid]-(mid+1);
        if(mis<k)
            l=mid+1;
        else
            r=mid-1;
    }
    return k+r+1;
}
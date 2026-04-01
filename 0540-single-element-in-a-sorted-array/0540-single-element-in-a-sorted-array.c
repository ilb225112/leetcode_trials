int singleNonDuplicate(int* arr, int numsSize) {
    if(numsSize==1) return *arr;

    int l=0,r=numsSize-1;
    while(l<r){
        int mid = l+((r-l)>>1);
        mid&=~1;

        if(arr[mid]==arr[mid+1])
            l=mid+2;
        else
            r=mid;
    }
    return *(arr+l);
}
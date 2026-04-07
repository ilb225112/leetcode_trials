void reverse(int* arr,int l,int r){
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;r--;
    }
    return;
}

void rotate(int* arr, int numsSize, int k) {
    k=k%numsSize;
    if(k==0) return;
    reverse(arr,0,numsSize-k-1);
    reverse(arr,numsSize-k,numsSize-1);
    reverse(arr,0,numsSize-1);
    return;
}
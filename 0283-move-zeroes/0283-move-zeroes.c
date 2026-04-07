void swap(int* arr,int l,int r){
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    return;
}

void moveZeroes(int* nums, int numsSize) {
    int q=0;
    for(int p=0;p<numsSize;p++){
        if(nums[q] && nums[p])
            q++;      
        else if(nums[p]){
            swap(nums,p,q);
            q++;
        }
    }  
    return;  
}
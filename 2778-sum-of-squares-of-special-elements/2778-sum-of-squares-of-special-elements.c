int sumOfSquares(int* nums, int numsSize) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        int j=i+1;
        if(numsSize%j == 0) sum+=(nums[i]*nums[i]);
    }
    return sum;
}
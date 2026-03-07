int minOperations(int* nums, int numsSize, int k) {
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=*(nums+i);
        if(sum%k==0) sum=0;
    }
    return sum%k;
}
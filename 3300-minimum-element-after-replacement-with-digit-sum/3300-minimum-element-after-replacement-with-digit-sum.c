int minElement(int* nums, int numsSize) {
    int min=nums[0];

    for(int i=0;i<numsSize;i++){
        int temp=nums[i],sum=0;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }
        if(sum <min) min=sum;
    }
    return min;
}
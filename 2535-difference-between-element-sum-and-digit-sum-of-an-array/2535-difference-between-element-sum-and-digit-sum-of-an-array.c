int differenceOfSum(int* nums, int numsSize) {
    int digSum=0,arrSum=0;
    for(int i=0;i<numsSize;i++){
        int temp=nums[i];
        arrSum+=temp;

        while(temp){
            digSum+=temp%10;
            temp/=10;
        }
    }
    return abs(arrSum-digSum);
}
int maxProductDifference(int* nums, int numsSize){
    int min1=INT_MAX,min2=INT_MAX;
    int max1=0,max2=0;

    for(int i=0;i<numsSize;i++){
        int n = nums[i];
        if(n<min1){
            min2=min1;
            min1=n;
        }else if(n<min2)
            min2=n;

        if(n>max1){
            max2=max1;
            max1=n;
        }else if(n>max2)
            max2=n;
    }
    
    return (max2*max1)-(min2*min1);
}
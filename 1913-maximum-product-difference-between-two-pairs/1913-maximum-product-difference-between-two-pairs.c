int maxProductDifference(int* nums, int numsSize){
    int min1,min2,max1,max2;
    if(nums[0]<nums[1]){
        min1=nums[0]; min2=nums[1];
        max1=nums[1]; max2=nums[0];
    }else{
        min1=nums[1]; min2=nums[0];
        max1=nums[0]; max2=nums[1];
    }
    
    for(int i=2;i<numsSize;i++){
        int n=nums[i];
        if (n<min2) {
            if(n<min1) {
                min2=min1;
                min1=n;
            }else 
                min2=n;
        }

        if(n>max2){
            if(n>max1) {
                max2=max1;
                max1=n;
            }else
                max2=n;
        }
    }

    return (max1*max2)-(min1*min2);
}
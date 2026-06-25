int maxProduct(int* nums, int numsSize) {
    int m1,m2;
    if(nums[0]>nums[1]) m1=0,m2=1;
    else m1=1,m2=0;

    for(int i=2;i<numsSize;i++){
        if(nums[i]>=nums[m1]) m2=m1,m1=i;
        else if(nums[i]>nums[m2]) m2=i;
    } 
    return (nums[m1]-1)*(nums[m2]-1);

}
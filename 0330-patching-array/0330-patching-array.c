int minPatches(int* nums, int numsSize, int n) {
    int count=0;
    long max=0;
    int i=0;
    
    while(max<n){
        if(i<numsSize && nums[i]<=max+1){
            max=max+nums[i];
            i++;
        }else{
            max=2*max+1;
            count++;
        }
    }
    return count;
}
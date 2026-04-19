int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int sum=0;
    if(k==0) return nums[0];

    unsigned int i=(1U<<k)-1;
    while(i<numsSize){
        sum+=nums[i];
        unsigned int c=i & -i;
        unsigned int r=i+c;
        i=(((r^i)>>2)/c) |r;
    }
    return sum;
    
}
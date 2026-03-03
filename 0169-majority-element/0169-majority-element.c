int majorityElement(int* nums, int numsSize) {
    if(numsSize<2) return nums[0];
    int freq=0,res=0;
    for(int i=0;i<numsSize;i++){
        if(freq==0) {res=nums[i];}
        if(res==nums[i]) freq++;
        else freq--;
    }
    return res;
}
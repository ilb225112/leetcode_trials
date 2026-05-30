int sumOfUnique(int* nums, int numsSize) {
    int uniq[101]={0};
    int res=0;

    for(int i=0;i<numsSize;i++){
        if(uniq[nums[i]]==0){
            res+=nums[i];
            uniq[nums[i]]=1;
        }else if(uniq[nums[i]]==1){
            res-=nums[i];
            uniq[nums[i]]=-1;
        }
    }
    return res;
}
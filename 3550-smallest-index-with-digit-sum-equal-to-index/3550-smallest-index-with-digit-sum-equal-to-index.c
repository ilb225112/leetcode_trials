int sumofdig(int a){
    int res=0;
    while(a){
        res+=a%10;
        a/=10;
    }
    return res;
}

int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        int dig=nums[i];
        if(dig>9)  dig=sumofdig(dig);
        if(dig==i) return i;
    }
    return -1;
}
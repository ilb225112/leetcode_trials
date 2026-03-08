int minKBitFlips(int* nums, int numsSize, int k) {
    bool* flip = calloc(numsSize,sizeof(bool));
    bool flag=0;
    int flips=0;

    for(int i=0;i<numsSize;i++){
        if(i>=k && flip[i-k])
            flag=!flag;

        if(flag==nums[i]){
            if(i+k>numsSize){
                free(flip);
                return -1;
            }
            flip[i] = 1;
            flag = !flag;
            flips++;
        }
    }
    free(flip);
    return flips;
}
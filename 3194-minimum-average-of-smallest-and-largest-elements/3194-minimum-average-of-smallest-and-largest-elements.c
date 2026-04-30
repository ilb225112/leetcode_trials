int cmp(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}
double minimumAverage(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);

    double min_avg=INT_MAX*1.0;

    for(int i=0,j=numsSize-1;i<numsSize/2;i++,j--){
        double avg=(nums[i]+nums[j])/2.0;
        min_avg=fmin(avg,min_avg);
    }
    return min_avg;
}
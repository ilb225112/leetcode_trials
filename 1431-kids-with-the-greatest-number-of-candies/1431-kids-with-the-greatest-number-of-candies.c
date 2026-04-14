/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    bool* res=calloc(candiesSize,sizeof(bool));
    int max=candies[0];

    for(int i=1;i<candiesSize;i++){
        if(max<candies[i])
            max=candies[i];
    }
    max-=extraCandies;

    for(int i=0;i<candiesSize;i++){
        if(candies[i]>=max)
            res[i]=1;
    }
    
    return res;
}
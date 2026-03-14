/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int i=1,j=0,k=0;

    int maxSize = digitsSize*(digitsSize-1)*((digitsSize-2 > 5)?5:(digitsSize-2));
    int* res=malloc(maxSize*sizeof(int));
    *returnSize=0;

    int cnt[10]={0};
    for(int i=0;i<digitsSize;i++)
        cnt[digits[i]]++;

    for(int i = 1; i <= 9; i++){          
        if(cnt[i] == 0) continue;
        cnt[i]--;

        for(int j = 0; j <= 9; j++){      
            if(cnt[j] == 0) continue;
            cnt[j]--;

            for(int k = 0; k <= 8; k += 2){ 
                if(cnt[k] == 0) continue;

                res[(*returnSize)++] = i*100 + j*10 + k;
            }
            cnt[j]++;
        }
        cnt[i]++;
    }
    return res;
}
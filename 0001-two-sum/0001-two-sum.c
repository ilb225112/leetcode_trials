/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//1.Brute force : O(n^2)
#define FOR(i,a,n) for(int i=a;i<n;i++)
int* twoSum(int* arr,int arrSize, int target, int* returnSize) {
   int* res=(int*)malloc(sizeof(int)*2);
    int p=-1,q=-1;
    FOR(i,0,arrSize-1){
        int tar=target-arr[i];
        FOR(j,i+1,arrSize){
            if(arr[j]==tar) {p=i;q=j;goto come_here;} 
        }
    }
    res[0]=-1;res[1]=-1;
    return res;

    come_here: 
        res[0]=p;
        res[1]=q;
    *returnSize=2;
    return res;
}
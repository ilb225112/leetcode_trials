/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool bs(int* arr,int target,int n){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==target)
            return true;
        else if(arr[mid]<target) 
            l=mid+1;
        else
            r=mid-1;
    }
    return false;
}

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* res=malloc(friendsSize*sizeof(int));
    *returnSize=0;

    for(int i=0;i<orderSize;i++){
        if(bs(friends,order[i],friendsSize))
            res[(*returnSize)++]=order[i];
    }
    return res;
}
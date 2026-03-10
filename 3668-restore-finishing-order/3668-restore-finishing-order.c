/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* res=malloc(friendsSize*sizeof(int));
    *returnSize=0;
    bool* check=calloc(orderSize+1,sizeof(bool));

    for(int i=0;i<friendsSize;i++)
        check[friends[i]]=1;

    for(int i=0;i<orderSize;i++){
        if(check[order[i]])
            res[(*returnSize)++]=order[i];
    }
    free(check);
    return res;
}
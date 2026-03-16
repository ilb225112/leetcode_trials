/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    //selection sort
    *returnSize=namesSize;
    for(int i=0;i<namesSize-1;i++){
        int maxidx=i;
        for(int j=i+1;j<namesSize;j++){
            if(heights[j]>heights[maxidx])
                maxidx=j;
        }
        int temp=heights[i];
        heights[i]=heights[maxidx];
        heights[maxidx]=temp;
        
        char* tempN = names[i];
        names[i]=names[maxidx];
        names[maxidx]=tempN;
    }
    return names;
}
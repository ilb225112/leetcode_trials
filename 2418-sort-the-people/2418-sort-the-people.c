/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct{
    char* name;
    int height;
}Person;

int comp(const void* a, const void* b){
    return ((Person*)b)->height - ((Person*)a)->height;
}

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    Person* arr= malloc(sizeof(Person)*namesSize);
    for(int i=0;i<namesSize;i++){
        arr[i].name = names[i];
        arr[i].height = heights[i];
    }
    qsort(arr,namesSize,sizeof(Person),comp);

    char** res= malloc(sizeof(char*)*namesSize);
    for(int i=0;i<namesSize;i++){
        res[i] = arr[i].name;
    }
    *returnSize = namesSize;
    free(arr);
    return res;
}
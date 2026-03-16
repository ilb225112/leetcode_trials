int *global_heights;
int cmp(const void *a, const void *b)
{
    int i = *(int*)a;
    int j = *(int*)b;
    return global_heights[j] - global_heights[i];
}

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize)
{
    global_heights = heights;
    int *idx = malloc(sizeof(int) * namesSize);
    for(int i = 0; i < namesSize; i++)
        idx[i] = i;
    qsort(idx, namesSize, sizeof(int), cmp);
    char **res = malloc(sizeof(char*) * namesSize);
    for(int i = 0; i < namesSize; i++)
        res[i] = names[idx[i]];
    *returnSize = namesSize;
    free(idx);
    return res;
}
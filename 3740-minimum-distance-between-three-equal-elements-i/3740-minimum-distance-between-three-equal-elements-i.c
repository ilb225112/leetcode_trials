int minimumDistance(int* nums, int numsSize) {
int last2[100] = {0};
    int res = 200;

    for (int i = 0; i < numsSize; i++) {
        int val = nums[i] - 1;
        int pos = i + 1;

        int pack = last2[val];
        int old = pack & 255;       
        int cur = pack >> 8;        

        last2[val] = cur | (pos << 8);

        if (old != 0) {
            int dist = (pos - old) << 1;
            if (dist < res) res = dist;
        }
    }

    return (res == 200) ? -1 : res;
}
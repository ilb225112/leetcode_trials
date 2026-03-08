/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double* res=malloc(2*sizeof(double));
    res[0]=celsius+273.15;
    res[1]=celsius*1.80 + 32.00;
    *returnSize=2;
    return res;
}
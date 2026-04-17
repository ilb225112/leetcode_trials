int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int res=0;
    for(int i=0;i<hoursSize;i++){
        res+=hours[i]>=target;
    }
    return res;
}
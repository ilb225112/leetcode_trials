int numberOfSteps(int num) {
    if(num==0) return 0;
    int step=0;
    while(num){
        step+=(num&1) + 1;
        num>>=1;
    }
    return step-1;
}
bool isBalanced(char* num) {
    int sum=0;
    while(*num){
        sum+=(*num-'0');
        sum=0-sum;
        num++;
    }
    return !sum;
}
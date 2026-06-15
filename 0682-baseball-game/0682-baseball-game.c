int calPoints(char** operations, int operationsSize) {
    int topidx=0;
    int* temp=malloc(sizeof(int)*operationsSize);
    for(int i=0;i<operationsSize;i++){
        char ch=operations[i][0];
        if(ch=='+'){
            temp[topidx]=temp[topidx-1]+temp[topidx-2];
            topidx++;
        }else if(ch=='D'){
            temp[topidx]=temp[topidx-1]*2;
            topidx++;
        }else if(ch=='C')
            topidx--;
        else{
            temp[topidx++]=atoi(operations[i]);
        }
    }

    int sum=0;
    for(int i=0;i<topidx;i++)
        sum+=temp[i];
    return sum;
}
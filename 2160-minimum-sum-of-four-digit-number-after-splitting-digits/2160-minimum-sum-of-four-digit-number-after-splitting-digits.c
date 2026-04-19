void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int minimumSum(int num) {
    int d1=num%10;
    int d2=(num/10)%10;
    int d3=(num/100)%10;
    int d4=(num/1000)%10;

    if(d2>d1) swap(&d1,&d2); 
    if(d3>d1) swap(&d1,&d3); 
    if(d4>d1) swap(&d1,&d4); 
   
    if(d2<d3) swap(&d3,&d2); 
    if(d2<d4) swap(&d4,&d2);

    int sum=d1+d2+d3*10+d4*10;
    return sum; 
}
int countSymmetricIntegers(int low, int high) {
    int res=0;
    for(int i=low;i<=high;i++){
        if(i<=100) {
            if(i%11==0) {res++;i+=10;}
            else i=i+(11-i%11-1);
        }
        else if(i<1000) i=1000;
        else if(i>=1000){
            int rsum=(i%10) + (i%100)/10;
            int lsum=(i%1000)/100 + i/1000;
            if(rsum==lsum) res++;
        }
    }
    return res;
}
int countSymmetricIntegers(int low, int high) {
    int res=0;
    int i=low;

    int s2=(low<11)?11 :((low+10)/11)*11;
    int e2=(high>99)?99:high;

    if(s2<=e2) res+=(e2-s2)/11 +1;
    int s4=(low<1000)?1000:low;

    for(int i=s4;i<=high;i++){
            int left = i / 100;
            int right = i % 100;
            int lsum = (left / 10) + (left % 10);
            int rsum = (right / 10) + (right % 10);
            if(rsum==lsum) res++;
    }
    return res;
}
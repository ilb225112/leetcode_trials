int findClosest(int x, int y, int z) {
    int d1=abs(x-z);
    int d2=abs(y-z);
    if(d1==d2) return 0;
    return (d1<d2)?1:2;
}
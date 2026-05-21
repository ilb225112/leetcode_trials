int totalMoney(int n) {
    int w=n/7;
    int d=n%7;
    return (w*(49+w*7) + d*(2*w +d+1))>>1;
}
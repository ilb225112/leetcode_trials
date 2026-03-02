int minPartitions(char* n) {
    int res=0;
    int len= strlen(n);

    for(int i=0;i<len;i++){
        int val = n[i]-'0';
        if(val==9) return 9;
        //arithmethic equivalent of max(res,val)
        res=(val+res+abs(val-res))/2;
    }
    return res;
}
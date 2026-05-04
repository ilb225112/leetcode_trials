int largestAltitude(int* gain, int gainSize) {
    int high=0,temp=0;
    for(int i=0;i<gainSize;i++){
        temp+=gain[i];
        if(temp>high) 
            high=temp;
    }
    return high;
}
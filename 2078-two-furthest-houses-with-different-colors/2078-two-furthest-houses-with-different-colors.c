int maxDistance(int* A, int n) {
    int left=0,right=0;
    for(int i=0;i<n;i++){
        if(A[i]^A[n-1]){
            left=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(A[i]^A[0]){
            right=i;
            break;
        }
    }

    return fmax(n-1-left,right);
}
int gcd(int a,int b){
    while(b){
        a%=b;
        int temp=a;
        a=b;
        b=temp;
    }
    return a;
}

int countPairs(int* nums, int n, int k) {
    int res=0;
    int idx[101][101];
    int count[101]={0};

    for(int i=0;i<n;i++){
        int g=gcd(i,k);
        int tar=k/g;
        int temp=nums[i];

        for(int j=0;j<count[temp];j++)
            if(idx[temp][j] % tar==0)
                res++;
        
        idx[temp][count[temp]++]=i;
    }

    return res;
}
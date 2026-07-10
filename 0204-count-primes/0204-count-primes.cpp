class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;

        vector<bool> isVisited(n);
        int count=1;
        int i;

        for(i=3;i*i<=n;i+=2){
            if(!isVisited[i]){
                count++;
                for(int j=i;j<n;j+=i)
                    isVisited[j]=1;
            }
        }
        for(;i<n;i+=2){
            if(!isVisited[i]) count++;
        }
        return count;
    }
};
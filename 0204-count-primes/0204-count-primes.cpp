class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isVisited(n);
        int count=0;

        for(int i=2;i<n;i++){
            if(!isVisited[i]){
                count++;
                for(int j=i;j<n;j+=i)
                    isVisited[j]=1;
            }
        }
        return count;
    }
};
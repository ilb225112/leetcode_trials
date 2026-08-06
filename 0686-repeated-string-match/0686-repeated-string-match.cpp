class Solution {
public:
    void buildLps(const string &s,vector<int> &lps,int m){
        int i=1,len=0;
        while(i<m){
            if(s[i]==s[len]){
                lps[i++]=++len;
            }else if(len!=0){
                len=lps[len-1];
            }else
                lps[i++]=0;
        }
    }

    int repeatedStringMatch(string a, string b) {
        int m=b.size(),n=a.size();
        vector<int> lps(m,0);
        buildLps(b,lps,m);

        int j=0;
        int minCount=(n+m-1)/n;
        int limit=(minCount+1)*n;
        for(int pos=0;pos<limit;pos++){
            char ch=a[pos%n];
            while(j>0 && ch!=b[j]) j=lps[j-1];
            if(b[j]==ch) j++;
            if(j==m) return pos/n +1;
        }
        return -1;
    }
};
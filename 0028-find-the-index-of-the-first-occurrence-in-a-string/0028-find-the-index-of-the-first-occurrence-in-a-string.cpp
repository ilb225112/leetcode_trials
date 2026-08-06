class Solution {
public:
    void buildLps(const string& s, vector<int> &lps,int m){
        int i=1,len=0;
        while(i<m){
            if(s[i]==s[len]) lps[i++]=++len;
            else if(len!=0) len=lps[len-1];
            else lps[i++]=0;
        }
    }

    int strStr(string haystack, string needle) {
        int m=needle.size(), n=haystack.size();
        vector<int> lps(m,0);
        buildLps(needle,lps,m);

        int j=0;
        for(int pos=0;pos<n;pos++){
            char ch=haystack[pos];
            while(j>0 && ch!=needle[j]) j=lps[j-1];
            if(ch==needle[j]) j++;
            if(j==m) return pos-j+1;
        }
        return -1;
    }
};
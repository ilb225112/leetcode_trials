class Solution {
public:
    string minWindow(string s, string t) {
        map<int,int> freq;
        int count=0,r=0;
        int l=0,st=-1;

        for(char ch: t)
            freq[ch]++;
        int n=s.size(),m=t.size(),len=INT_MAX;

        while(r<n){
            if(freq[s[r]]>0) count++;
            freq[s[r]]--;

            while(count==m){
                if(r-l+1 <len){
                    len=(r-l+1);
                    st=l;
                }
                freq[s[l]]++;
                if(freq[s[l]]>0) count--; 
                l++;
            }
            r++;
        }
        return (st==-1)?"":s.substr(st,len);
    }
};
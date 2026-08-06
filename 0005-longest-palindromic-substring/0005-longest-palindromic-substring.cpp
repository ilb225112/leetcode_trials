class Solution {
public:
    string preprocess(const string& s){
        string t="^#";
        for(char ch: s){
            t+=ch;
            t+='#';
        }
        t+='$';
        return t;
    }

    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        string t=preprocess(s);
        int n=t.size();
        vector<int> p(n,0);

        int center=0,right=0;
        int maxLen=0,maxCenter=0;

        for(int i=1;i<n;i++){
            int mirror=2*center-i;
            if(i<right) p[i]=min(p[mirror],right-i);
            while(t[i+1+p[i]]==t[i-1-p[i]]) p[i]++;

            if(i+p[i]>right){
                center=i;
                right=i+p[i];
            }

            if(p[i]>maxLen){
                maxLen=p[i];
                maxCenter=i;
            }
        }
        int start=(maxCenter-maxLen)>>1;
        return s.substr(start,maxLen);
    }
};
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int s1=a.size();
        int s2=b.size();
        if(a==b) return 1;
        
        string ta=a,tb=b;
        int tsa=s1;
        while(s2+tsa>s1) {ta+=a;s1+=tsa;}
        size_t index=ta.find(b);
        if(index==string::npos) return -1;
        int totalNeeded = index + s2;
        int count = (totalNeeded + tsa - 1) / tsa;
        return count;

    }
};
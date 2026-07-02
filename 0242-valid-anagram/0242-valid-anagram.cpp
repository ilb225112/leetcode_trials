class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1=s.size(),l2=t.size();
        if(l1!=l2) return 0;
        int freq[26]={0};
        
        for(int i=0;i<l1;i++)
            freq[s[i]-'a']++;
        for(int  j=0;j<l2;j++)
            if((--freq[t[j]-'a'])<0 )
                return 0;
        
        return 1;
    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int len=s.length();
        vector<int> map(257,-1);
        vector<int> map1(257,-1);

        for(int i=0;i<len;i++){
            if(map[s[i]]==-1 && map1[t[i]]==-1) {map[s[i]]=t[i];map1[t[i]]=s[i];}
            else if(map[s[i]]!=t[i] || map1[t[i]]!=s[i]) return 0;
        }
        return 1;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int pos=0,len=strs.size();
        if(len==1) return strs[0];
        if(strs[0]=="") return "";

        string s1=strs[0];
        for(char ch: s1){
            for(int i=1;i<len;i++){
                if(strs[i][pos]!=ch)
                    return s1.substr(0,pos);
            }
            pos++;
        }
        return s1;
    }
};
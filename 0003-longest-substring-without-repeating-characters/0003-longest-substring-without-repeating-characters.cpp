class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxlen=0,currlen=0,r=0;
        vector<int> lastPos(256,-1);
        int len=s.size();

        while(r<len){
            char ch=s[r];
            if(lastPos[ch]!=-1){
                int pos=lastPos[ch];
                while(l<=pos) lastPos[s[l++]]=-1;
                lastPos[ch]=-1;
            }else{
                lastPos[ch]=r;
                r++;
                maxlen=max(maxlen,r-l);
            }
        }
        return maxlen;
    }
};
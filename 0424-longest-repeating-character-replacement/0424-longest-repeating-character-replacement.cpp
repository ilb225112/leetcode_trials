class Solution {
public:
    int characterReplacement(string s, int k) {
        int len=s.size();
        int freq[26]={0};
        int l=0,maxLen=0,maxfreq=0;

        for(int r=0;r<len;r++){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A']);

            while((r-l+1)-maxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxLen=(max(maxLen,(r-l+1)));
        }
        return maxLen;
    }
};
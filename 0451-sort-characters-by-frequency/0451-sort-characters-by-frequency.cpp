class Solution {
public:
    string frequencySort(string s) {
        string res;
        vector<pair<int,char>> freq(75,{0,0});
        for(char ch='0';ch<='z';ch++)
            freq[ch-'0'].second=ch;
        for(char ch: s)
            freq[ch-'0'].first++;
        
        sort(freq.rbegin(),freq.rend());
        
        for(int i=0;i<75;i++){
            int f=freq[i].first;
            if(f==0) break;
            char ch=freq[i].second;
            while(f){
                res+=ch;
                f--;
            }
        }

        return res;
    }
};
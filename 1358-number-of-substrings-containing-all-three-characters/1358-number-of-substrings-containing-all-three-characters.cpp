class Solution {
public:
    int numberOfSubstrings(string s) {
        int ns=0,cnt=0,n=s.size();
        int freq[3]={0};
        int l=0;

        for(int r=0;r<n;r++){
            char ch=s[r]-'a';
            if(!freq[ch]){
                cnt++;
            }
            freq[ch]++;

            while(cnt==3){
                ns+=(n-r);
                char ch=s[l]-'a';
                freq[ch]--;
                if(freq[ch]==0){
                    cnt--;
                }
                cout<<ns<<" ";
                l++;
            }
        }
        return ns;
    }
};
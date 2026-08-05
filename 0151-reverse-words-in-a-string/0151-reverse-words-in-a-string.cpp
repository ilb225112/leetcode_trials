class Solution {
public:
    string reverseWords(string s) {
        int read=0,write=0;
        int len=s.size();

        for(int i=0;i<len;i++){
            while(i<len && s[i]==' ') i++;
            if(i==len) break;
            read=i;
            while(i<len && s[i]!=' ') i++;
            string temp=s.substr(read,i-read);
            reverse(temp.begin(),temp.end());
            if(write>0) s[write++]=' ';
            for(char ch:temp)
                s[write++]=ch;
        }
        
        s.erase(write);
        reverse(s.begin(),s.end());

        return s;
    }
};
class Solution {
public:
    string RLE(string s){
        int count=0;
        string res="";
        int n=s.size();

        char ch=s[0];
        for(int i=0;i<n;i++){
            if(ch==s[i]) count++;
            else{
                res+=to_string(count);
                res+=ch;
                count=0;
                ch=s[i];
                i--;
            }
        }
        res+=to_string(count);
        res+=ch;

        return res;
    }

    string countAndSay(int n) {
        string temp="1";
        for(int i=1;i<n;i++){
            temp=RLE(temp);
        }
        return temp;
    }
};
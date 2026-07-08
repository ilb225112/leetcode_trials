class Solution {
public:
    int myAtoi(string s) {
        bool sign=0;
        int len=s.size();
        int idx=0;
        while(idx<len &&s[idx]==' ') idx++;
        if(idx>=len) return 0;

        if(s[idx]=='-'||s[idx]=='+'){
            sign=(s[idx]=='-');
            idx++;
        }

        while(idx<len && s[idx]=='0') idx++;
        int res=0;
        int dig;

        while(idx<len && (s[idx]>='0' && s[idx]<='9')){
            dig=s[idx]-'0';
            if(res>INT_MAX/10 || (res==INT_MAX/10 && dig>7)){
                return sign?INT_MIN:INT_MAX;
            }
            res=res*10+dig;
            idx++;
        }
        
        return (sign)?-res:res;
    }
};
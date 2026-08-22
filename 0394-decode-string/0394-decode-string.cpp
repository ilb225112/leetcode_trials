class Solution {
public:
    string decodeString(string s) {
        string res="";
        stack<int> num;
        stack<string> str;
        int dig=0;

        for(char ch:s){
            if(isdigit(ch)){
                dig=dig*10+(ch-'0');
            }else if(ch=='['){
                num.push(dig);
                str.push(res);
                dig=0;
                res="";
            }else if(ch==']'){
                int n=num.top();
                num.pop();
                string temp=str.top();
                str.pop();
                for(int i=0;i<n;i++) temp+=res;
                res=temp;
            }else{
                res+=ch;
            }
        }
        return res;
    }
};
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> par;
        par[')']='(',par['}']='{',par[']']='[';
        stack<char> st;

        for(char ch: s){
            if(ch=='(' || ch=='{' || ch=='[')
                st.push(ch);
            else{
                if(st.empty()) return 0;
                if(st.top()!=par[ch]) return 0;
                st.pop();
            }
        }

        return st.empty();
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int pcnt=-1;
        for(char ch: s){
            if(ch=='('){ 
                pcnt++;
                if(pcnt>0) res.push_back(ch);
            }else{
                pcnt--;
                if(pcnt>=0) res.push_back(ch);
            }
        }
        return res;
    }
};
class Solution {
public:
    bool isPalindrome(string s,int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return 0;
            i++;j--;
        }
        return 1;
    }

    void part(string s, vector<vector<string>> &res, vector<string> &temp, int idx,int start){
        int n=s.size();
        if(idx==n){
            if(start==idx)
                res.push_back(temp);
            return;
        }

        part(s,res,temp,idx+1,start);

        if(isPalindrome(s,start,idx)){
            temp.push_back(s.substr(start,idx-start+1));
            part(s,res,temp,idx+1,idx+1);
            temp.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        part(s,res,temp,0,0);
        return res;
    }
};
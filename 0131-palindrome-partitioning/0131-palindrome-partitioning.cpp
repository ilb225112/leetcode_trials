class Solution {
public:
    void part(string s, vector<vector<string>> &res, vector<string> &temp, int idx,int start,vector<vector<bool>> &dp){
        int n=s.size();
        if(idx==n){
            if(start==idx)
                res.push_back(temp);
            return;
        }

        part(s,res,temp,idx+1,start,dp);

        if(dp[start][idx]){
            temp.push_back(s.substr(start,idx-start+1));
            part(s,res,temp,idx+1,idx+1,dp);
            temp.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;
        int n=s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i<=1) dp[i][j]=1;
                    else dp[i][j]=dp[i+1][j-1];
                }
            }
        }
        part(s,res,temp,0,0,dp);
        return res;
    }
};
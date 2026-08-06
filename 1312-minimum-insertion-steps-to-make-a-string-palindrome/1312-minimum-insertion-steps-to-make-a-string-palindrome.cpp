class Solution {
public:
    int lcs(vector<vector<int>> & dp, int m, string &s, string &t, int i, int j){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j]=1+lcs(dp,m,s,t,i-1,j-1);
        return dp[i][j]=max(lcs(dp,m,s,t,i-1,j), lcs(dp,m,s,t,i,j-1));        
    }

    int minInsertions(string s) {
        int m=s.size();
        string t=s;
        reverse(t.begin(),t.end());

        vector<vector<int>> dp(m,vector<int>(m,-1));
        int len=lcs(dp,m,s,t,m-1,m-1);
        return m-len;
    }
};
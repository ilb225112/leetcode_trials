class Solution {
public:
    void solve(vector<vector<string>> &res,vector<string> &temp, int n, int col,bool lr[], bool ud[], bool ld[]){
        if(col==n){
            res.push_back(temp);
            return;
        }

        for(int i=0;i<n;i++){
            if(lr[i]==0 && ud[n-1+col-i]==0 && ld[i+col]==0){
                lr[i]=1,ud[n-1+col-i]=1,ld[i+col]=1;
                temp[i][col]='Q';
                solve(res,temp,n,col+1,lr,ud,ld);
                temp[i][col]='.';
                lr[i]=0,ud[n-1+col-i]=0,ld[i+col]=0;
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> temp;
        bool lr[9] = {0};
        bool ud[17] = {0};
        bool ld[17] = {0};
        string s(n,'.');
        for(int i=0;i<n;i++){
            temp.push_back(s);
        }
        solve(res,temp,n,0,lr,ud,ld);
        return res;
    }
};
class Solution {
public:
    bool isSafe(int col,int row, vector<string> &res,int n){
        int dr=row,dc=col;
        for(int i=0;i<col;i++) if(res[row][i]=='Q') return 0;
        while(--row>=0 && --col>=0)  if(res[row][col]=='Q') return 0;
        row=dr,col=dc;
        while(++row<n && --col>=0) if(res[row][col]=='Q') return 0;
        return 1;        
    }

    void solve(vector<vector<string>> &res,vector<string> &temp, int n, int col){
        if(col==n){
            res.push_back(temp);
            return;
        }

        for(int i=0;i<n;i++){
            if(isSafe(col,i,temp,n)){
                temp[i][col]='Q';
                solve(res,temp,n,col+1);
                temp[i][col]='.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> temp;
        string s(n,'.');
        for(int i=0;i<n;i++){
            temp.push_back(s);
        }
        solve(res,temp,n,0);
        return res;
    }
};
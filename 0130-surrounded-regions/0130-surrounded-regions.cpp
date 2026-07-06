class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int r=board.size(),c=board[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(r,vector<bool>(c,0));
        int tr=r-1,tc=c-1;
        for(int j=0;j<c;j++){
            if(board[0][j]=='O'){
                q.push({0,j});
                visited[0][j]=1;
                board[0][j]='-';
            }
            if(board[tr][j]=='O'){
                q.push({tr,j});
                visited[tr][j]=1;
                board[tr][j]='-';
            }
        }
        for(int i=1;i<tr;i++){
            if(board[i][0]=='O'){
                q.push({i,0});
                visited[i][0]=1;
                board[i][0]='-';
            }
            if(board[i][tc]=='O'){
                q.push({i,tc});
                visited[i][tc]=1;
                board[i][tc]='-';
            }
        }

        int delRow[]={0,0,1,-1};
        int delCol[]={1,-1,0,0};
        while(!q.empty()){
            int ti=q.front().first;
            int tc=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=ti+delRow[i];
                int nc=tc+delCol[i];
                if(nr>=0 && nr<r && nc>=0 && nc<c && board[nr][nc]=='O' && !visited[nr][nc]){
                    q.push({nr,nc});
                    visited[nr][nc]=1;
                    board[nr][nc]='-';
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='-') board[i][j]='O';
                else if(board[i][j]=='O') board[i][j]='X';
            }
        }


    }
};
class Solution {
public:
    bool solve(vector<vector<char>>& board, int row[],int col[],int box[],vector<pair<int,int>> &track) {
        if(track.empty()) return 1;
        int i=track.back().first,j=track.back().second;
        track.pop_back();
        int gr=(i/3)*3,gc=(j/3)*3,b=gr+gc/3;
        for(char ch='1';ch<='9';ch++){
            int num=ch-'0';
            int bit=1<<num;
            if(!(row[i]&bit) && !(col[j]&bit) && !(box[b]&bit)){
                board[i][j]=ch;
                row[i]|=bit,col[j]|=bit,box[b]|=bit;
                if(solve(board,row,col,box,track)) return 1;
                board[i][j]='.';
                row[i]&=~bit,col[j]&=~bit,box[b]&=~bit;
            }
        }
        track.push_back({i,j});
        return 0;
    }

    void solveSudoku(vector<vector<char>>& board){
        vector<pair<int,int>> track;
        int row[9]={0},col[9]={0},box[9]={0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0';
                    int bit=1<<num;
                    int gr=(i/3)*3,gc=(j/3)*3,b=gr+gc/3;
                    row[i]|=bit;
                    col[j]|=bit;
                    box[b]|=bit;
                }else
                    track.push_back({i,j});
            }
        }
        solve(board,row,col,box,track);
    }
};
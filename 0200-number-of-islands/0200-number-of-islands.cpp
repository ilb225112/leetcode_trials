class Solution {
public:
    void bfs(int row,int col,vector<vector<bool>>& visited,vector<vector<char>>& grid,int m,int n){
        queue<pair<int,int>> q;
        q.push({row,col});
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        while(!q.empty()){
            pair<int,int> node=q.front();
            q.pop();
            row=node.first;
            col=node.second;

            for(int i=0;i<4;i++){
                int nrow=row+delRow[i];
                int ncol=col+delCol[i];
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && grid[nrow][ncol]=='1' && !visited[nrow][ncol]){
                    visited[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
            
            visited[row][col]=1;
            
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    bfs(i,j,visited,grid,m,n);
                    count++;
                }
            }
        }
        return count;
    }
};
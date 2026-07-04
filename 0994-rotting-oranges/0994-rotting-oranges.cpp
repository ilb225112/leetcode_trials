class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int res=-1;
        int rowDel[]={0,0,1,-1};
        int colDel[]={1,-1,0,0};
        int fresh=0;

        //row,col & time
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                if(grid[i][j]==2)
                    q.push({{i,j},0});
                else if(grid[i][j]==1)
                    fresh++;
        }
        if(fresh==0) return 0;
        if(q.empty()) return -1;

        vector<vector<bool>> visited(m,vector<bool>(n,0));
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int time=q.front().second;
            q.pop();
            visited[row][col]=1;
            
            for(int i=0;i<4;i++){
                int nRow=row+rowDel[i];
                int nCol=col+colDel[i];
                
                if(nRow>=0 && nRow<m && nCol>=0  && nCol<n && grid[nRow][nCol]==1 && !visited[nRow][nCol]){
                    visited[nRow][nCol]=1;
                    int ntime=time+1;
                    q.push({{nRow,nCol},ntime});
                    res=ntime;
                    fresh--;
                }
               
            }
        }

        return (fresh==0)?res:-1;
    }
};
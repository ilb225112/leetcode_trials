class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int delRow[]={0,0,1,-1};
        int delCol[]={1,-1,0,0};

        queue<pair<int,int>> q;
        q.push({sr,sc});
        int ic=image[sr][sc];
        image[sr][sc]=color;
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nRow=row+delRow[i];
                int nCol=col+delCol[i];
                if(nRow>=0 && nRow<m && nCol>=0 && nCol<n && image[nRow][nCol]==ic && !visited[nRow][nCol]){
                    visited[nRow][nCol]=1;
                    image[nRow][nCol]=color;
                    q.push({nRow,nCol});
                }
            }
        }
        return image;
    }
};
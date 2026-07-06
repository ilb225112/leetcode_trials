class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int nr=mat.size();
        int nc=mat[0].size();
        vector<vector<bool>> visited(nr,vector<bool>(nc,0));
        vector<vector<int>> res(nr,vector<int>(nc,0));
        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
            }
        }
        
        int delR[]={0,0,1,-1};
        int delC[]={1,-1,0,0,};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int newR=r+delR[i];
                int newC=c+delC[i];
                if(newR>=0 && newR<nr && newC>=0 && newC<nc && !visited[newR][newC]){
                    q.push({{newR,newC},dist+1});
                    res[newR][newC]=dist+1;
                    visited[newR][newC]=1;
                } 
            }
        }
        return res;
    }
};
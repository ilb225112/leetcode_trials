class Solution {
public:
    void dfs(int n,vector<bool>& visited,vector<vector<int>>& adj){
        visited[n]=1;
        for(auto it: adj[n]){
            if(!visited[it])
                dfs(it,visited,adj);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int m=isConnected.size();
        vector<vector<int>> adj(m);
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int count=0;
        vector<bool> visited(m, false);
        for(int i=0;i<m;i++){
            if(!visited[i]){
                count++;
                dfs(i,visited,adj);
            }
        }
        return count;
    }

};
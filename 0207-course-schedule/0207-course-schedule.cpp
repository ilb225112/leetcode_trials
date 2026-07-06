class Solution {
public:
    bool dfs(int st,vector<bool>& inStack,vector<bool>& visited, vector<vector<int>>& adjMat){
        visited[st]=1;
        inStack[st]=1;
        for(auto it:adjMat[st]){
            if(!visited[it]){
                if(dfs(it,inStack,visited,adjMat)==true)
                    return true;
            }
            else if(inStack[it])
                return true;
        }
        inStack[st]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjMat(numCourses);
        vector<bool> visited(numCourses);
        vector<bool> inStack(numCourses,0);
        for(auto it: prerequisites){
            adjMat[it[1]].push_back(it[0]);
        }
        
        for(int i=0;i<numCourses;i++){
            if(!visited[i] && dfs(i,inStack,visited,adjMat))
                return false;
        }
        return true;
    }
};
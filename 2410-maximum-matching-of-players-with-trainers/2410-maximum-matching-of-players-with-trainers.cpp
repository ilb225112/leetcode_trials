class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end(),greater<int>());
        sort(trainers.begin(),trainers.end(),greater<int>());

        int i=0,j=0,m=players.size(),n=trainers.size();
        while(i<m && j<n){
            j=j+(players[i]<=trainers[j]);
            i++;
        }
        return j;
    }
};
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());

        int i=0,j=0,m=g.size(),n=s.size();
        while(i<m && j<n){
            j+=(g[i]<=s[j]);
            i++;
        }
        return j;
    }
};
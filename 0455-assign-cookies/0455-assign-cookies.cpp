class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());

        int count=0;
        int i=0,j=0,m=g.size(),n=s.size();
        while(i<m && j<n){
            if(g[i]<=s[j]){
                count++;
                j++;
            }
            i++;
        }
        return count;
    }
};
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.rbegin(),s.rend());
        sort(g.rbegin(),g.rend());

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
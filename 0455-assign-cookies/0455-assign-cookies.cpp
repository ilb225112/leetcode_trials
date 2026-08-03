class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int gidx=0,sidx=0,count=0;
        int m=g.size(), n=s.size();
        while(gidx<m && sidx<n){
            if(g[gidx]<=s[sidx]){
                gidx++;
                sidx++;
                count++;
            }else{
                sidx++;
            }
        }
        return count;
    }
};
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m=intervals.size();
        if(m<2) return intervals;

        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for(int i=1;i<m;i++){
            int end=res.back()[1];
            int j=i;
            
            while(j<m && end>=intervals[j][0]){
                end=max(end,intervals[j][1]);
                j++;
            }
            
            if(i==j)
                res.push_back(intervals[i]);
            else{
                res.back()[1]=end;
                i=j-1;
            }
        }
        return res;
    }
};
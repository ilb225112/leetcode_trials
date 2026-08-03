class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i:nums)
            count[i]++;
        
        int n=nums.size();
        vector<vector<int>> freq(n+1);
        for(auto it:count)
            freq[it.second].push_back(it.first);
        
        vector<int> res;
        for(int i=n;i>=0;i--){
            for(int i:freq[i]){
                res.push_back(i);
                if(res.size()==k)
                    return res;
            }
        }
        return res;
    }
};
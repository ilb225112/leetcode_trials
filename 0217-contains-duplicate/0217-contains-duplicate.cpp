class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int> s;
        for(int val: v) 
            if(!s.insert(val).second) return 1;
        return 0;
    }
};
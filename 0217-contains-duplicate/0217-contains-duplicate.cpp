class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int> s;
        for(int val: v) s.insert(val);
        return s.size()<v.size();
    }
};
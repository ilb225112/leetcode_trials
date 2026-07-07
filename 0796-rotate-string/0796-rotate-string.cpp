class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return 0;
        string srch=goal+goal;
        if(srch.contains(s)) return 1;
        return 0;
    }
};
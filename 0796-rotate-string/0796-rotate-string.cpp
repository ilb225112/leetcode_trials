class Solution {
public:
    bool rotateString(string s, string goal) {
        string srch=goal+goal;
        if(srch.contains(s)) return 1;
        return 0;
    }
};
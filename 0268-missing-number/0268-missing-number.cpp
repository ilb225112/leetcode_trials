class Solution {
public:
    int missingNumber(vector<int>& v) {
        int res=0,i=1;
        for(int val:v){
            res^=(val^i);
            i++;
        }
        return res;
    }
};
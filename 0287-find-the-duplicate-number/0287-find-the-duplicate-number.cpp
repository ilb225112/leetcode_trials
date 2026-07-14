class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> cnt(1e5+1,0);
        for(int i:nums){
            if(!cnt[i]) cnt[i]=1;
            else return i;
        }
        return -1;
    }
};
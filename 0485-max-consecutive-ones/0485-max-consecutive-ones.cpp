class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0,maxLen=0;
        for(int i:nums)
            if(i==1) len+=1,maxLen=max(len,maxLen);
            else len=0;
        return maxLen;
    }
};
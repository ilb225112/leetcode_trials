class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zc=0,n=nums.size(),l=0;
        int maxLen=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) zc++;
            while(zc>k){
                if(nums[l]==0) zc--;
                l++;
            }
            maxLen=max(maxLen,(i-l+1));
        }
        return maxLen;
    }
};
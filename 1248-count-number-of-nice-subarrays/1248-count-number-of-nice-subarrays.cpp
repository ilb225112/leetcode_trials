class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int l=0,r=0,cnt=0,nc=0;
        int n=nums.size();

        for(int r=0;r<n;r++){
            if(nums[r]&1) cnt++;
            while(cnt>k){
                if(nums[l]&1) cnt--;
                l++;
            }
            nc+=(r-l+1);
        }
        return nc;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        if(k==0) return atMost(nums,0);
        return atMost(nums,k)-atMost(nums,k-1);    
    }
};
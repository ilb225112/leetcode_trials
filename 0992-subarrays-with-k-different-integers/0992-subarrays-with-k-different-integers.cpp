class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int ccnt=0,n=nums.size();
        map<int,int> freq;
        int l=0;

        for(int r=0;r<n;r++){
            freq[nums[r]]++;
            while(freq.size()>k){
                freq[nums[l]]--;
                if(freq[nums[l]]==0)
                    freq.erase(nums[l]);
                l++;
            }
            if(freq.size()<=k)
                ccnt+=(r-l+1);
        }
        return ccnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        if(k==0) return atMost(nums,k);
        return atMost(nums,k)-atMost(nums,k-1);
    }
};
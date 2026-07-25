class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        vector<vector<int>> ans;
        for(int h=0;h<size;h++) if(h>0 && nums[h]==nums[h-1]) continue;else
        for(int i=h+1;i<size;i++){
            if(i!=h+1 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=size-1;
            while(j<k){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[h];
                if(sum<target) j++;
                else if(sum>target) k--;
                else{
                    ans.push_back({nums[h],nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};
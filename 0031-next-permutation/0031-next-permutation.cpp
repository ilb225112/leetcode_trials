class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            reverse(nums.begin(),nums.end());
            return;
        }
        int idx=-1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        int swpidx=n-1;
        int ele=nums[idx];
        for(int i=n-1;i>idx;i--){
            if(nums[i]>ele){
                swpidx=i;
                break;
            }
        }

        swap(nums[swpidx],nums[idx]);
        reverse(nums.begin()+idx+1,nums.end());
    }
};
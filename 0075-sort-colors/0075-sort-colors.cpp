class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int travel=l;

        while(travel<=r){
            if(nums[travel]==0){
                swap(nums[travel],nums[l]);
                l++;
                travel++;
            }else if(nums[travel]==2){
                if(nums[r]==2){r--;continue;}
                swap(nums[travel],nums[r]);
                r--;
            }else
                travel++;
        }
    }
};
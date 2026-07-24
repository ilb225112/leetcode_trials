class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w=1,size=nums.size();
        for(int i=0;i<size-1;i++)
            if(nums[i]!=nums[i+1])
                nums[w++]=nums[i+1];
        return w;
    }
};
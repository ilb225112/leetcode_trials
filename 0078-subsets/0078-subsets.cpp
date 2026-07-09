class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int npos=(1<<nums.size());
        int temp=0;
        vector<vector<int>> res(npos);
        int idx=0;

        while(temp<npos){
            int ttemp=temp,i=0;
            while(ttemp){
                if(ttemp&1)
                    res[idx].push_back(nums[i]);
                ttemp>>=1;
                i++;
            }
            temp++;
            idx++;
        }
        return res;
    }
};
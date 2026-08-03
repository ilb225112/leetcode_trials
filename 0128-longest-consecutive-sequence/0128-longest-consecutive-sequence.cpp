class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(),nums.end());
        int ans=0;

        for(int i:num){
            if(num.find(i-1)==num.end()){
                int cnum=i;
                int cans=1;

                while(num.find(cnum+1)!=num.end()){
                    cans+=1;
                    cnum+=1;
                }
                ans=max(cans,ans);
            }
        }
        return ans;
    }
};
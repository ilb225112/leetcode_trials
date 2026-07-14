class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,num1;
        for(int i:nums){
            if(cnt==0) num1=i;
            if(i==num1) cnt++;
            else cnt--;
        }
        return num1;
    }
};
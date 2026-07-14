class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int num1=INT_MIN,num2=INT_MIN;

        for(int i:nums){
            if(cnt1==0 && num2!=i){
                cnt1=1;
                num1=i;
            }else if(cnt2==0 && num1!=i){
                cnt2=1;
                num2=i;
            }else if(num1==i) cnt1++;
            else if(num2==i) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0,cnt2=0;
        for(int i:nums){
            if(i==num1) cnt1++;
            else if(i==num2) cnt2++;
        }

        int n=nums.size();
        vector<int> res;
        if(cnt1>n/3) res.push_back(num1);
        if(cnt2>n/3) res.push_back(num2);
        if(res.size()>1) sort(res.begin(),res.end());
        return res;
    }
};
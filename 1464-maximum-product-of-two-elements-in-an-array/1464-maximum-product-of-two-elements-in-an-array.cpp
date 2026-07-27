class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n1=nums[0],n2=nums[1];
        if(n1<n2) swap(n1,n2);
        int n=nums.size();

        for(int idx=2;idx<n;idx++){
            int i=nums[idx];
            if(i>n1) n2=n1, n1=i;
            else if(i>n2) n2=i;
        } 
        n1--,n2--;
        return n1*n2;
    }
};
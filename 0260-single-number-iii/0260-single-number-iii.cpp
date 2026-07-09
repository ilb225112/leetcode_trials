class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res=0;
        for(int i:nums)
            res^=i;
        unsigned int pos=0;
        int temp=0;
        while((res&1)==0){
            pos++;
            res=res>>1;
        }
        //cout<<pos<<" ";
        int num1=0,num2=0;
        for(int i:nums){
            if(i & (1<<pos)) num1^=i;
            else num2^=i;
        }
        vector<int> result(2);
        result[0]=(num1>num2)?num2:num1;
        result[1]=(num1>num2)?num1:num2;
        return result;
    }
};
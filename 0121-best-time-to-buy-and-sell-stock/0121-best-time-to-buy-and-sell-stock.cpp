class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int cp=prices[0];

        for(int sp:prices){
            int diff=sp-cp;
            if(diff>profit) profit=diff;
            if(sp<cp) cp=sp;
        }
        
        return profit;
    }
};
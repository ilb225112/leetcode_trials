class Solution {
public:
    int solve(int k,int h, vector<int>& piles){
        int reqH=0;
        for(int i:piles){
            reqH+=((i/k)+((i%k)!=0));
            if(reqH>h) return 0;
        }
        return 1;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=piles[0];
        for(int num:piles) r=max(r,num);

        while(l<r){
            int mid=l+((r-l)>>1);
            bool isPossible=solve(mid,h,piles);
            if(isPossible){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return r;
    }
};
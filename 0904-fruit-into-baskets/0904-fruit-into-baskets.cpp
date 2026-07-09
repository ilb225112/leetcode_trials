class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int cnt1=0,cnt2=0;
        int a=fruits[0],b=-1,r=1,l=0;
        int maxlen=1;

        while(r<n){
            int s=fruits[r];
            if(s!=a && b==-1){
                b=s;
                cnt2=r;
            }else{
                if(s==a){
                    cnt1=r;
                }else if(s==b){
                    cnt2=r;
                }else{
                    if(cnt1>cnt2){
                        l=cnt2+1;
                        cnt2=r;
                        b=s;
                    }else{
                        l=cnt1+1;
                        cnt1=r;
                        a=s;
                    }
                }
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
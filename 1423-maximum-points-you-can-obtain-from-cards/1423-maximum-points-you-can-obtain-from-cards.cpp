class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=k,n=cardPoints.size(),r=n;
        int csum=0;
        for(int i=0;i<l;i++) csum+=cardPoints[i];
        for(int j=r;j<n;j++) csum+=cardPoints[j];
        int msum=csum;
        l--;r--;

        while(l>=0){
            csum-=cardPoints[l];
            csum+=cardPoints[r];
            if(csum>msum) msum=csum;
            l--;
            r--;
        }
        return msum;
    }
};
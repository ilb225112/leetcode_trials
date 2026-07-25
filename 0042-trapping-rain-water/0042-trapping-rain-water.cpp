class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> trackHeight(n,0);

        //right pass
        int temp=height[0];
        trackHeight[0]=height[0],trackHeight[n-1]=height[n-1];
        for(int  i=1;i<n;i++){
            trackHeight[i]=temp;
            temp=max(temp,height[i]);
        }

        //left pass
        temp=height[n-1];
        for(int i=n-2;i>=0;i--){
            trackHeight[i]=min(temp,trackHeight[i]);
            temp=max(temp,height[i]);
        }

        int res=0;
        for(int i=1;i<n-1;i++)
            res+=(trackHeight[i]-height[i]>0)?(trackHeight[i]-height[i]):0;
        return res;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0;
        int l=0,r=height.size()-1;
        int total=0;

        while(l<r){
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);
            if(lmax>rmax){
                total+=rmax-height[r];
                r--;
            }else{
                total+=lmax-height[l];
                l++;
            }
        }
        return total;
    }
};
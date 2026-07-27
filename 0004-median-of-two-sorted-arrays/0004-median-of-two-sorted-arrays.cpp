class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        if(n1>n2) return findMedianSortedArrays(nums2,nums1);

        int k=(n1+n2+1)>>1;
        int low=0,high=min(n1,k);
        while(low<=high){
            int cut1=low+((high-low)>>1);
            int cut2=k-cut1;
            int r1=(cut1<n1)?nums1[cut1]:INT_MAX;
            int r2=(cut2<n2)?nums2[cut2]:INT_MAX;
            int l1=(cut1>0)?nums1[cut1-1]:INT_MIN;
            int l2=(cut2>0)?nums2[cut2-1]:INT_MIN;

            if(l1<=r2 && l2<=r1){
                if((n1+n2)&1)
                    return max(l1,l2);
                return (max(l1,l2)+min(r1,r2))/2.0;
            }
            if(l1>r2){
                high=cut1-1;
            }else{
                low=cut1+1;
            }

        }
        return 0.0;
    }
};
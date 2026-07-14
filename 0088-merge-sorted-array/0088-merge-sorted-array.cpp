class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if(m==0){
            int idx=0;
            for(int i:nums2)
                nums1[idx++]=i;
            return;
        }

        int l=0,r=0,idx=m-1;
        for(int i=m+n-1;idx>=0;i--)
            nums1[i]=nums1[idx--];
        

        l=n;
        idx=0;
        
        while(l<m+n && r<n){
            if(nums1[l]<nums2[r]){
                nums1[idx]=nums1[l];
                l++;
            }else{
                nums1[idx]=nums2[r];
                r++;
            }
            idx++;
        }
       

        while(r<n && idx<m+n){
            nums1[idx++]=nums2[r];
            r++;
        }
    }
};
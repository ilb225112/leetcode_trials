class Solution {
public:
    void merge(int low,int mid,int high,vector<int>& arr){
        int lptr=low,rptr=mid+1;
        vector<int> temp;
        
        while(lptr<=mid && rptr<=high){
            if(arr[lptr]<=arr[rptr])
                temp.push_back(arr[lptr++]);
            else{
                temp.push_back(arr[rptr++]);
            }
        }
        while(lptr<=mid)
            temp.push_back(arr[lptr++]);
        while(rptr<=high)
            temp.push_back(arr[rptr++]);
        
        int ti=0;    
        for(int i=low;i<=high;i++,ti++){
            arr[i]=temp[ti];
        }
        return;
    }

    int countPairs(int low,int high,int mid,vector<int>& arr){
        int count=0;
        int r=mid+1;
        for(int l=low;l<=mid;l++){
            while(r<=high && arr[l]>2LL * arr[r]) r++;
            count+=(r-mid-1);
        }
        return count;
    }
  
    int mergeSort(int low,int high, vector<int>& arr){
        int count=0;
        int mid=low+((high-low)>>1);
        if(low>=high) return count;
        count+=mergeSort(low,mid,arr);
        count+=mergeSort(mid+1,high,arr);
        count+=countPairs(low,high,mid,arr);
        merge(low,mid,high,arr);
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(0,n-1,nums);
    }
};
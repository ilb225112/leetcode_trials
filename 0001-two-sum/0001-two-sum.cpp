class Solution {
public:
    #define FOR(i,a,n) for(int i=a;i<n;i++)
    //2.Better Approach : O(nlogn)
    vector<int> twoSum(vector<int>& arr, int target) {
        int arrSize=arr.size();
        vector<int> res(2,-1);
        unordered_map<int,int> idx;
        
        FOR(i,0,arrSize){
            int temp=target-arr[i];
            if(idx.find(temp) !=idx.end()){
                res[0]=idx[temp];
                res[1]=i;
                break;
            }
            idx[arr[i]]=i;
        }
        return res;
    }
};
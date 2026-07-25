class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int> prefixSumMap;
        int x=0;
        int n=arr.size(),count=0;
        prefixSumMap[0] = 1;
        
        for(int i=0;i<n;i++){
            x+=arr[i];
            if(prefixSumMap.find(x-k)!=prefixSumMap.end())
                count+=prefixSumMap[x-k];
            prefixSumMap[x]++;
        }
        return count;
    }
};
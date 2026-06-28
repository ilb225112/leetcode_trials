class Solution {
public:
    #define FOR(i,a,n) for(int i=a;i<n;i++)
    //2.Better Approach : O(nlogn)
    vector<int> twoSum(vector<int>& arr, int target) {
    int arrSize=arr.size();
    vector<int> res(2,-1);
    
    vector<pair<int,int>> temp;
    FOR(i,0,arrSize) temp.push_back({arr[i],i});
    sort(temp.begin(),temp.end());

    int p=0,q=arrSize-1;
    while(p<q){
        int sum=temp[p].first + temp[q].first;
        if(sum==target){
            res[0]=temp[p].second;
            res[1]=temp[q].second;
            break;
        }else if(sum>target)
            q--;
        else 
            p++;
    }
        return res;
    }
};
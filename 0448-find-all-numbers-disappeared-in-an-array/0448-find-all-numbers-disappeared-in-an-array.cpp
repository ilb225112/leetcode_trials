class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        vector<int> res;
        int n=v.size();
        for(int i=0;i<n;i++){
            int idx=v[i]-1;
            while(v[i]!=v[idx]){
                swap(v[i],v[v[i]-1]);
                idx=v[i]-1;
            }
        }

        for(int i=0;i<n;i++)
            if(v[i]!=i+1) res.push_back(i+1);
        
        return res;
    }
};
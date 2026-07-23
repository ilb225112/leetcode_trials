class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           stack<int> st;
           unordered_map<int,int> map;

           int n=nums2.size();
           map[nums2[n-1]]=-1;
           for(int i=n-2;i>=0;i--){
                st.push(nums2[i+1]);
                while(!st.empty() && st.top()<=nums2[i])
                    st.pop();
                if(st.empty()){
                    map[nums2[i]]=-1;
                    continue;
                }
                map[nums2[i]]=st.top();
           }

           vector<int> res;
           for(int i: nums1){
                res.push_back(map[i]);
           }
        return res;
    }
};
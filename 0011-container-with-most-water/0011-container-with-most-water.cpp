class Solution {
public:
    int maxArea(vector<int>& v){
        int p=0,q=v.size()-1;
        int area=0;

        while(p<q){
            area=max(area,(q-p)*min(v[p],v[q]));
            if(v[p]>v[q]) q--;
            else p++;
        }
        return area;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> uniq;
        int n=fruits.size();
        int l=0,r=0,maxlen=0;

        while(r<n){
            uniq[fruits[r]]++;
            if(uniq.size()>2){
                uniq[fruits[l]]--;
                if(uniq[fruits[l]]==0)
                    uniq.erase(fruits[l]);
                l++;
            }
            if(uniq.size()<=2)
                maxlen=max(r-l+1,maxlen);
            r++;
        }
        
        return maxlen;
    }
};
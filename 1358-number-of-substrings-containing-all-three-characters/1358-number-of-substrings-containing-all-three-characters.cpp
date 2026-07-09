class Solution {
public:
    int numberOfSubstrings(string s) {
        int ptr[3]={-1,-1,-1};
        int ans=0;
        int n=s.size();

        for(int i=0;i<n;i++){
            ptr[s[i]-'a']=i;
            if(ptr[0]!=-1 && ptr[1]!=-1 && ptr[2]!=-1)
                ans+=min({ptr[0],ptr[1],ptr[2]})+1;
        }
        return ans;
    }
};
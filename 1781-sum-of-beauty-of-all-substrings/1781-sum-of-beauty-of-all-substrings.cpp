class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int len=s.size();

        for(int i=0;i<len-2;i++){
            int freq[26]={0};
            freq[s[i]-'a']++;
            freq[s[i+1]-'a']++;
            for(int j=i+2;j<len;j++){
                int maxf=0,minf=len;
                freq[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        maxf=max(maxf,freq[k]);
                        minf=min(minf,freq[k]);
                    }
                }
                sum+=(maxf-minf);
            }
        }
        return sum;
    }
};
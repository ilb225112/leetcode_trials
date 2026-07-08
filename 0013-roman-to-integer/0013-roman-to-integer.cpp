class Solution {
public:
    int romanToInt(string s) {
        char ch[]={'I','V','X','L','C','D','M'};
        int arr[22];
        int num=1;bool flag=0;
        for(int i=0;i<7;i++){
            arr[ch[i]-'C']=num;
            if(flag) num*=2;
            else num*=5;
            flag=!flag;
        }

        char prev='I'-'C';
        int val=0;
        for(auto i=s.rbegin();i!=s.rend();i++){
            char ch=*i-'C';
            if(arr[ch]>=arr[prev]) val+=arr[ch];
            else val-=arr[ch];
            prev=ch;
        }
        return val;
    }
};
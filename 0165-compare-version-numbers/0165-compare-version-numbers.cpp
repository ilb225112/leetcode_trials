class Solution {
public:
    int compareVersion(string version1, string version2) {
        string a1,a2;
        unsigned int p=0,q=0,n1=0,n2=0;
        int m=version1.size(),n=version2.size();

        while(p<m || q<n){
            n1=0,n2=0;
            while(p<m && version1[p]=='0') p++;
            while(q<n && version2[q]=='0') q++;

            while(p<m && version1[p]!='.') n1=n1*10+version1[p]-'0',p++;    
            while(q<n && version2[q]!='.') n2=n2*10+version2[q]-'0',q++;    
            //cout<<n1<<"->"<<p<<" "<<n2<<"->"<<q<<endl;
            if(n1==n2){p++,q++;continue;}
            break;
        }
        if(n1==n2) return 0;
        return n1>n2?1:-1;     
    }
};
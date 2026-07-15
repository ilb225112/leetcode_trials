class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int idx=0;
        for(char ch: directions)
            if(ch=='R') idx++;
            else healths[idx]=-healths[idx],idx++;
        
        int n=positions.size();
        vector<pair<int,pair<int,int>>> arr(n,{0,{0,0}});
        for(int i=0;i<n;i++){
            arr[i].first=positions[i];
            arr[i].second.second=healths[i];
            arr[i].second.first=i;
        }
        sort(arr.begin(),arr.end());

        vector<pair<int,int>> collider;
        collider.push_back(arr[0].second);
        for(int idx=1;idx<n;idx++){
            int h=arr[idx].second.second;
            bool destroyed=0;
            while(!collider.empty()&& h<0){
                destroyed=0;
                int top=collider.back().second;
                if(top<0){destroyed=0;break;}
                    if(top==abs(h)){destroyed=1;collider.pop_back();break;}
                    if(top>abs(h)) {destroyed=1;collider.back().second-=1;break;}
                    collider.pop_back();
                    h+=1;
            }
            if(!destroyed) {
                arr[idx].second.second=h;
                collider.push_back(arr[idx].second);
            }
        }

        n=collider.size();
        for(int i=0;i<n;i++)
            collider[i].second=abs(collider[i].second);
        sort(collider.begin(),collider.end());

        vector<int> res;
        for(auto i: collider)
            res.push_back(i.second);
        return res;
    }
};
class Solution {
public:
struct TrieNode{
        TrieNode* link[2];
        TrieNode(){
            link[0]=link[1]=nullptr;
        }
    };
    TrieNode* root=new TrieNode();

    void insert(int num){
        TrieNode* temp=root;
        for(int i=31;i>=0;i--){
            bool bit=num & (1<<i);
            if(!temp->link[bit]) temp->link[bit]=new TrieNode();
            temp=temp->link[bit];;
        }
    }

    int maxPossible(int num){
        TrieNode* temp=root;
        for(int i=31;i>=0;i--){
            bool bit=num & (1<<i);
            if(temp->link[!bit]) num |=(1<<i),temp=temp->link[!bit];
            else num&=~(1<<i),temp=temp->link[bit];
        }
        return num;
    }

    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size(),idx=0,m=nums.size(),p=0;
        vector<int> res(n);
        sort(nums.begin(),nums.end());
        multimap<int,pair<int,int>> inp;
        for(auto it:queries)
            inp.insert({it[1],{it[0],idx++}});
        
        for(auto const &i: inp){
            int a=i.first, b=i.second.first, c =i.second.second;
            while(p<m && nums[p]<=a) insert(nums[p++]);
            if(p==0){
                res[c]=-1;
                continue;
            }
            res[c]=maxPossible(b);
        }
        return res;
    }
};
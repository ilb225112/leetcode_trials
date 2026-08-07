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

    int findMaximumXOR(vector<int>& nums) {
        for(int i: nums) insert(i);
        int maxXor=0;
        for(int i: nums){
            maxXor=max(maxXor,maxPossible(i));
            if(maxXor==INT_MAX) return INT_MAX;
        }
        return maxXor;
    }
};
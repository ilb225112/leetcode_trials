class Solution {
public:
    struct TrieNode{
        struct TrieNode* children[26]={};
        bool isEnd;
    };
    TrieNode* root;

    void insert(string word){
        TrieNode* node=root;
        for(char ch: word){
            int idx=ch-'a';
            if(node->children[idx]==NULL) node->children[idx]=new TrieNode();
            node=node->children[idx];
        }
        node->isEnd=1;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        root=new TrieNode();
        int n=s.size();
        vector<bool> dp(n+1,0);
        dp[0]=1;

        for(string w: wordDict) insert(w);

        for(int i=0;i<n;i++){
            if(!dp[i]) continue;
            TrieNode* node=root;
            for(int j=i;j<n;j++){
                int idx=s[j]-'a';
                if(!node->children[idx]) break;
                node=node->children[idx];
                if(node->isEnd) dp[j+1]=1;
            }
        }
        return dp[n];
    }
};
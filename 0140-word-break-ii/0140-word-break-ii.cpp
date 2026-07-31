class Solution {
public:
    struct TrieNode{
        struct TrieNode* children[26]={};
        bool isEnd;
    };
    TrieNode* root;
    unordered_map<int,vector<string>> memo;


    void insert(string word){
        TrieNode* node=root;
        for(char ch: word){
            int idx=ch-'a';
            if(node->children[idx]==NULL) node->children[idx]=new TrieNode();
            node=node->children[idx];
        }
        node->isEnd=1;
    }

    vector<string> solve(string& s, int idx){
        if(memo.count(idx)) return memo[idx];
        int n=s.size();
        vector<string> res;

        if(idx==n){
            res.push_back("");
            memo[idx]=res;
        }

        TrieNode* node=root;
        for(int end=idx;end<n;end++){
            int c=s[end]-'a';
            if(!node->children[c]) break;
            node=node->children[c];
            if(node->isEnd){
                string word=s.substr(idx,end-idx+1);
                vector<string> rest=solve(s,end+1);
                for(auto& sentence:rest){
                    res.push_back(word+(sentence.empty()?"":" "+sentence));
                }
            }
        }
        return memo[idx]=res;

    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        root=new TrieNode();
        for(string word: wordDict) insert(word);
        memo.clear();
        return solve(s,0);
    }
};
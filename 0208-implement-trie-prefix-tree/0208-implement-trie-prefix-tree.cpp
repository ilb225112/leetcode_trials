class Trie {
public:
    struct TrieNode{
        TrieNode* children[26];
        bool isEndOfWord;

        TrieNode(){
            isEndOfWord=false;
            for(int i=0;i<26;i++) children[i]=nullptr;
        }
    };


    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp=root;
        for(char ch: word){
            if(!temp->children[ch-'a']) temp->children[ch-'a']=new TrieNode();
            temp=temp->children[ch-'a'];
        }
        temp->isEndOfWord=1;
    }
    
    bool search(string word) {
        TrieNode* temp=root;
        for(char ch: word){
            if(!temp->children[ch-'a']) return 0;
            temp=temp->children[ch-'a'];
        }
        return temp->isEndOfWord==1;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp=root;
        for(char ch: prefix){
            if(!temp->children[ch-'a']) return 0;
            temp=temp->children[ch-'a'];
        }
        return 1;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
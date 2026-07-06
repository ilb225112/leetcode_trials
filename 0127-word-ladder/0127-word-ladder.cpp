class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s;
        queue<pair<string,int>> q;
        int len=beginWord.size();
        int flag=0;

        for(auto it: wordList){
            s.insert(it);
            if(it==endWord) flag=1;
        }

        if(flag==0) return 0;
        s.erase(beginWord);
        q.push({beginWord,1});
        auto it=s.end();

        while(!q.empty()){
            string word=q.front().first;
            int dist=q.front().second;
            if(word==endWord) return dist;
            q.pop();
            for(int i=0;i<len;i++){
                string temp=word;
                for(int j='a';j<='z';j++){
                    temp[i]=j;
                    if(s.find(temp)!=it){
                        q.push({temp,dist+1});
                        s.erase(temp);
                    }
                }
            }   
        }
        return 0;
    }
};
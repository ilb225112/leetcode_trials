class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        int n=asteroids.size();
        res.push_back(asteroids[0]);

        for(int i=1;i<n;i++){
            int ins=asteroids[i];
            
            if(ins<0){
                while(!res.empty() && res.back()>0 && res.back()<abs(ins)){
                    res.pop_back();
                }
                if(!res.empty()){
                    if(res.back()>abs(ins)) 
                        continue;
                    else if(res.back()==abs(ins))
                    {
                        res.pop_back();
                        continue;
                    }
                }
                res.push_back(ins); 
            }else{
                res.push_back(ins);
            }
        }
        return res;
    }
};
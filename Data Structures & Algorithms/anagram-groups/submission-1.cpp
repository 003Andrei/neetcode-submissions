class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<int>> mp;
        vector<vector<string>> res;
        string s; 
        for (int i = 0; i < strs.size(); i++){    
            s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(i);        
        }
        
        for (auto& pair : mp) {
            vector<string> t; 
            for (int num : pair.second) {
                t.push_back(strs[num]);
            }
            res.push_back(t);
        }
        return res; 
    }    
};

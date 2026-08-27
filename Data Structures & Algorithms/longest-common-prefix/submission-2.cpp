class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool t = true; 
        int low = 201;
        string word; 
        string ret;
        for (auto x : strs){
            if (x.length() < low){
                low = x.length();
                word = x;
            }
        }
        string temp;
        for (int i = 0; i < low; i++){
            for (int j = 0; j < strs.size(); j++){
                temp = strs[j];
                
                if (word[i] == temp[i]){
                    if (j == strs.size()-1)
                        ret += word[i];
                }
                else{
                    return ret;
                }
            }
        }
        return ret;
    }
};
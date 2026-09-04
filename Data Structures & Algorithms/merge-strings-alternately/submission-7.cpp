class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res; 
        int large = max(word1.size(), word2.size());
        int i=0; 
        while (i < large){
            if (i <= (int)word1.size()-1 && i <= (int)word2.size()-1){
                res += word1[i]; 
                res += word2[i];
            }
            else if (i > (int)word1.size()-1 && i <= (int)word2.size()-1){
                res += word2[i];
            }
            else if (i > (int)word2.size()-1 && i <= (int)word1.size()-1){
                res += word1[i];
            }
            i++;
        }
        return res;
    }
};
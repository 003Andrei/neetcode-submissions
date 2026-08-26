#include <map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false; 
        }
        unordered_map <char, int> anagram;
        for (int i; i < s.length(); i++){
            anagram[s[i]]++;
            anagram[t[i]]--;
        }
        for (auto const& [key, val] : anagram) {
            if (val != 0) return false;
        }
        return true;
    }
};


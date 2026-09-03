class Solution {
public:
    void reverseString(vector<char>& s) {
        int pointer1 = 0; 
        int pointer2 = s.size()-1; 
        while (pointer1 < (s.size())/2){
            char temp = s[pointer1];
            char temp2 = s[pointer2];
            s[pointer1] = temp2;
            s[pointer2] = temp;
            pointer1++; 
            pointer2--;
        }
    }
};
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> noDupe; 
        for (int n : nums){
            if (noDupe.contains(n)){
                return true;
            }
            else;
                noDupe.insert(n);
        }
    return false;
    }
};
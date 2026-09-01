class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp; 
        int m = nums.size()/2;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++; 
            
        }
        int maxVal = 0;
        int res = 0;
        for (auto x : mp){
            if (maxVal <= x.second){
                maxVal = x.second;
                res = x.first;
            }
        }
        return res; 
    }
};
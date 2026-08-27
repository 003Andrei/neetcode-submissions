class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> c;
        for (int i = 0; i < nums.size(); i++){
            c.push_back(nums[i]);
        }
        for (int x = 0; x < nums.size(); x++){
            c.push_back(nums[x]);
        }
        return c;
    }
};
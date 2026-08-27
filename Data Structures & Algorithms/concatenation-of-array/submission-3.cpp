class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> c;
        int x = 0;
        while (x < 2){
            for (int i = 0; i < nums.size(); i++){
                c.push_back(nums[i]);
            }
                x++;
        }
        return c;
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map <int, int> mp; 
        for (auto x: nums){
            mp[x] += 1;
        }
        int index = 0; 
        for (const auto& [first, second]: mp){
            if (second > 0){
                nums[index] = first;
                index++;
            }
            else
                continue;
        }
        nums.erase(nums.begin() + index, nums.end());
        sort(nums.begin(), nums.end());
        return index;  
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx = 0;
        while (idx < nums.size()){
            if (nums[idx] == target){
                return idx;
            }
                idx++;

        }
        return -1;
    }
};

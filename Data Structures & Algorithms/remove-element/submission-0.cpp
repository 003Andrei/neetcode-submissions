class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0; 
        int right; 
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[left] = nums[i]; 
                left ++;
            }
            else{
                nums[i] = NULL; 
            }
        }
        return left++; 
    }
};
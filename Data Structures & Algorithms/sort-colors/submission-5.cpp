class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> mp;
        int zed = 0;
        int one = 0;
        int two = 0;
        for (int num : nums) {
            if (num == 0){
                zed += 1;
            }
            else if (num == 1){
                one += 1;
            }
            else {
                two++;
            }
        }
        int c = 0;
        for (int i = 0; i < nums.size(); i++){
            while (zed > 0){
                nums[c] = 0;
                c++;
                zed--;
            }
            while (one > 0){
                nums[c] = 1;
                c++;
                one--;
            }
            while (two > 0){
                nums[c] = 2;
                c++;
                two--;
            }
            
        }

        
    
    }
};
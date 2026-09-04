class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c = 0;
        for (int i = 0; i < m + n; i++){
        
            if (nums1[i]==0){
                if (c < n){
                nums1[i] = nums2[c];
                c++;
                }
                else break;
            
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};
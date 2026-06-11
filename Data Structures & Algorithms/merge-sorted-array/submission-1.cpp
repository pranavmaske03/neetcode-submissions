class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last_idx = m + n - 1;
        int i = m - 1, j = n - 1;

        while(i >= 0 || j >= 0) {
            if(i < 0) {
                nums1[last_idx--] = nums2[j--];
            } else if(j < 0) {
                nums1[last_idx--] = nums1[i--];
            } else if(nums1[i] >= nums2[j]) {
                nums1[last_idx--] = nums1[i--];
            } else if(nums2[j] > nums1[i]) {
                nums1[last_idx--] = nums2[j--];
            } 
        }
    }
};
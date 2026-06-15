class Solution {
public:
    void heapify(vector<int>& nums, int n, int i) {
        int lgt = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if(l < n && nums[l] > nums[lgt]) {
            lgt = l;
        }

        if(r < n && nums[r] > nums[lgt]) {
            lgt = r;
        }

        if(lgt != i) {
            swap(nums[lgt],nums[i]);
            heapify(nums,n, lgt);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        // Build max heap
        for(int i = n/2-1; i >= 0; i--) {
            heapify(nums, n, i);
        }

        // Extract elements one by one
        for(int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }

        return nums;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = 0, count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(count == 0) {
                candidate = nums[i];
                count = 1;
            } else if(candidate == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};
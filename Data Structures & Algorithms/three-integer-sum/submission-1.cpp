class Solution {
public:
    vector<vector<int>> res;
    vector<int> sub;

    void backtrack(vector<int>& nums, int idx, int sum) {

        if(sub.size() == 3) {
            if(sum == 0) {
                res.push_back(sub);
            }
            return;
        }

        for(int i = idx; i < nums.size(); i++) {
            if(i > idx && nums[i] == nums[i - 1]) continue;

            sub.push_back(nums[i]);
            backtrack(nums, i + 1, sum + nums[i]);
            sub.pop_back();
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, 0);
        return res;
    }
};

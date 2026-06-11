class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> res;

        for(auto& str : strs) {
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(str);
        }
        for(auto& [key, values] : mp) {
            res.push_back(values);
        }
        return res;
    }
};

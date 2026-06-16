class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        bool check = false;
        string res = "";
        for(int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];
            int size = strs.size();
            for(int j = 0; j < size; j++) {
                if(i >= strs[j].length() || strs[j][i] != ch) {
                    check = true;
                    break;
                }
            }
            if(check) break;
            res += ch;
        }
        return res;
    }
};
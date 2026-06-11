class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        string res = "";
        int i = 0, j = 0;

        while(i < n1 && j < n2) {
            res.push_back(word1[i++]);
            res.push_back(word2[j++]);
        }
        if(i < n1) res.append(word1, i, n1 - i);
        if(j < n2) res.append(word2, j, n2 - j);

        return res;
    }
};
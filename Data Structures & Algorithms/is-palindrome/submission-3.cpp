class Solution {
public:
    bool isPalindrome(string str) {
        string pallindrome = "";

        for(auto& s : str) {
            if(isalpha(s)) {
                pallindrome.push_back(tolower(s));
            }
            if(isdigit(s)) {
                pallindrome.push_back(s);
            }
        }
        cout<<pallindrome<<endl;
        int start = 0, end = pallindrome.length() - 1;
        while(start <= end) {
            if(pallindrome[start] != pallindrome[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};

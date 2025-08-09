class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c)))
                clean += tolower(static_cast<unsigned char>(c));
        }
        int n = clean.size();
        for (int i = 0; i < n / 2; ++i)
            if (clean[i] != clean[n - i - 1]) return false;
        return true;
    }
};
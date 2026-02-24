class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ch;
        int l = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            while (ch.count(s[i])) {
                ch.erase(s[l]);
                l++;
            }
            ch.insert(s[i]);
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};
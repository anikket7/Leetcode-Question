class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                count++;
            }
        }
        int maxm = count;
        for (int r = k; r < n; r++) {
            if (isVowel(s[r])) {
                count++;
            }
            if (isVowel(s[r - k])) {
                count--;
            }
            maxm = max(maxm, count);
        }
        return maxm;
    }
};
class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowels = 0, consonants = 0;

        for (char ch : s) {
            if (ch >= 'a' && ch <= 'z') {  // only lowercase letters
                if (ch == 'a' || ch == 'e' || ch == 'i' ||
                    ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        return consonants > 0 ? vowels / consonants : 0;
    }
};
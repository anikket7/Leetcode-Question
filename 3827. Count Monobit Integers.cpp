class Solution {
public:
    int countMonobit(int n) {
        int count = 1;
        int val = 1;
        while (val <= n) {
            count++;
            val = (val << 1) | 1;
        }
        return count;
    }
};
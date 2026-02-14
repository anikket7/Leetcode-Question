class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int maxlen = 0;
        int zero = 0;
        for (int r = 0; r < n; r++) {
            if (nums[r] == 0) {
                zero++;
            }
            while (zero > k) {
                if (nums[l] == 0) {
                    zero--;
                }
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};
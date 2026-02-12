class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        int maxm = sum;
        for (int r = k; r < n; r++) {
            sum = sum + nums[r] - nums[r - k];
            maxm = max(sum, maxm);
        }
        return (double)maxm / k;
    }
};
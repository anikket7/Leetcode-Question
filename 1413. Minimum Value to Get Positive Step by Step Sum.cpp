class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minsum = 0;
        for (int x : nums) {
            sum += x;
            minsum = min(sum,minsum);
        }
        return 1 - minsum;
    }
};
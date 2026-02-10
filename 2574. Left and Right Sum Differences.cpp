class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int total = 0;
        for (int val : nums) {
            total += val;
        }
        int leftsum = 0;
        for (int i = 0; i < n; i++) {
            int rightsum = total - leftsum - nums[i];
            ans.push_back(abs(leftsum - rightsum));
            leftsum += nums[i];
        }
        return ans;
    }
};
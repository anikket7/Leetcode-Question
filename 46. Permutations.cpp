class Solution {
public:
    void solve(int start, vector<int>& nums, vector<vector<int>>& ans) {
        if (start == nums.size()) {
            ans.push_back({nums});
            return;
        }
        for (int i = start; i < nums.size(); i++) {
            swap(nums[i], nums[start]);
            solve(start + 1, nums, ans);
            swap(nums[i], nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0, nums, ans);
        return ans;
    }
};
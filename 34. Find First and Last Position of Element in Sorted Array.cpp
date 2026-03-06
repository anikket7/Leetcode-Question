class Solution {
public:
    int occurance(vector<int>& nums, int target, bool firocr) {
        int start = 0, end = nums.size() - 1, ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                if (firocr) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {-1, -1};
        }
        int first = occurance(nums, target, true);

        int second = occurance(nums, target, false);
        return {first, second};
    }
};
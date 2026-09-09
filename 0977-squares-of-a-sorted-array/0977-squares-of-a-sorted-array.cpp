class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size);
        int left = 0;
        int right = size - 1;
        int pos = size - 1;
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                int squared_left = nums[left] * nums[left];
                result[pos] = squared_left;
                left++;
            } else {
                int squared_right = nums[right] * nums[right];
                result[pos] = squared_right;
                right--;
            }
            pos--;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
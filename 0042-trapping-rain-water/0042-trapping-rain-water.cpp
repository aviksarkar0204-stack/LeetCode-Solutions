class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxLeftHeight = 0, maxRightHeight = 0;
        int totalWater = 0;
    
        while (left < right) {
            if (height[left] < height[right]) {
                maxLeftHeight = max(maxLeftHeight, height[left]);
                totalWater += maxLeftHeight - height[left];
                left++;
            } else {
                maxRightHeight = max(maxRightHeight, height[right]);
                totalWater += maxRightHeight - height[right];
                right--;
            }
        }
        return totalWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
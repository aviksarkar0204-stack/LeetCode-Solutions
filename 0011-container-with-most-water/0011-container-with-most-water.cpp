class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = size(height) - 1;
        int maxArea = 0;
        while(left < right){
            auto area = min(height[left],height[right]) * (right - left);
            maxArea = max(maxArea,area);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
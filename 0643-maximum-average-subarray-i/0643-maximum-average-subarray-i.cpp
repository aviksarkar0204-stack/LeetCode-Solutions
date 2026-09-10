class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        auto window_sum = 0;
        for (int i = 0;  i < k; i++){
            window_sum += nums[i];
        }
        auto max_average = (double)window_sum/k;
        for(int j = k; j < nums.size(); j++){
            window_sum = window_sum + nums[j] - nums[j-k];
            auto average_window = (double)window_sum/k;
            max_average = max(max_average,average_window);
        }
        return max_average;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int total_sum = 0;
        int min_length = INT_MAX;
        for (int right = 0; right < nums.size(); right++){
            total_sum += nums[right];
            while(total_sum >= target){
                min_length = min(min_length,right - left + 1);
                total_sum -= nums[left];
                left++;
            }
        }
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
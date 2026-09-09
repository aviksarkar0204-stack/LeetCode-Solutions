class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int slow_ptr = 0;
        for (int fast_ptr = 1; fast_ptr < nums.size(); fast_ptr++) {
            if (nums[fast_ptr] != nums[slow_ptr]) {
                slow_ptr++;
                nums[slow_ptr] = nums[fast_ptr]; 
            }
        }
        return slow_ptr + 1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
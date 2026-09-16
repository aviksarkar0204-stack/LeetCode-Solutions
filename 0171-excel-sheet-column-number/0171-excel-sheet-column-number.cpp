class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        int power = 0;
        for (int i = columnTitle.length() - 1; i >= 0; i--){
            int x = columnTitle.at(i) - 64;
            sum = sum + (int)pow(26,power++) * x;
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
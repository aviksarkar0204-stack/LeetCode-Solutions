class Solution {
public:
    int reverse(int x) {
        long long reversed = 0; 
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;

            if (reversed > INT_MAX || reversed < INT_MIN) {
                return 0;
            }
        }
        return (int)reversed;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
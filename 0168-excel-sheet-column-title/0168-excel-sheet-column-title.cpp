class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber > 0) {
            int remainder = (columnNumber - 1) % 26;
            result.push_back((char)(remainder + 'A'));
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
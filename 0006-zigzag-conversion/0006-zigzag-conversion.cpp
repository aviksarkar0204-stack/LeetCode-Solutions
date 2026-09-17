class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;  // edge case: no zigzag possible with 1 row

        vector<string> rows(numRows);
        int currentRow = 0;
        int direction = 1;

        for (char c : s) {
            rows[currentRow] += c;

            if (currentRow == 0) {
                direction = 1;
            } else if (currentRow == numRows - 1) {
                direction = -1;
            }

            currentRow += direction;
        }

        string result;
        for (string& row : rows) {
            result += row;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
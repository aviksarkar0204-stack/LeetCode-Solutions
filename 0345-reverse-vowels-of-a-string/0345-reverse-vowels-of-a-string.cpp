class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (start < end) {
            while (start < end && vowels.find(s[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(s[end]) == string::npos) {
                end--;
            }
            swap(s[start], s[end]);
            start++;
            end--;
        }
        return s;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
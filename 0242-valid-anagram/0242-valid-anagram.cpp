class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;
        for (int i = 0; i < s.length(); i++){
            char c = s[i];
            freq1[c]++;
        }
        for (int i = 0; i < t.length(); i++){
            char c = t[i];
            freq2[c]++;
        }
        return freq1 == freq2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
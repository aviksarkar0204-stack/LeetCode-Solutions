class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0;
        int max_lenght = 0;
        for (int right = 0; right < s.size(); right++){
            while(seen.count(s[right]) == 1){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            max_lenght = max(max_lenght,right - left + 1);
        }
        return max_lenght;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
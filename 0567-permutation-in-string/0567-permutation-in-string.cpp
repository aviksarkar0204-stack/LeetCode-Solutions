class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window_size = s1.size();
        if (s2.size() < window_size) return false;

        unordered_map<char,int> freq1, freq2;

        // Build frequency for s1
        for (char c : s1) {
            freq1[c]++;
        }

        // Build frequency for the first window in s2
        for (int i = 0; i < window_size; i++) {
            freq2[s2[i]]++;
        }

        if (freq1 == freq2) return true;

        // Slide the window across s2
        for (int right = window_size; right < s2.size(); right++) {
            char newChar = s2[right];
            char oldChar = s2[right - window_size];

            freq2[newChar]++;          
            freq2[oldChar]--;         
            if (freq2[oldChar] == 0) { 
                freq2.erase(oldChar);
            }

            if (freq1 == freq2) return true;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
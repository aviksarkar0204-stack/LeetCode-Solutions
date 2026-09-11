class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int count = 0;
        for(int i = 0;i < k;i++){
            if(vowels.count(s[i])){
                count++;
            }
        }
        int maxCount = count;
        for (int j = k; j < s.length(); j++){
            if(vowels.count(s[j])){
                count++;
            }
            if(vowels.count(s[j - k])){
                count--;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
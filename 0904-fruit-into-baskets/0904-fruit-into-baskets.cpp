class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int,int> freq;
        int left = 0;
        int result = 0;
        for(int right = 0; right < fruits.size(); right++){
            freq[fruits[right]]++;
            while(freq.size() > 2){
                freq[fruits[left]]--;
                if (freq[fruits[left]] == 0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
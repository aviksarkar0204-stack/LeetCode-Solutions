class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        sort(strs.begin(),strs.end());
        int i = 0;
        int n = strs.size();
        while(i < strs[0].size() && i < strs[n-1].size() && strs[0][i] == strs[n-1][i]){
            i++;
        }
        return strs[0].substr(0,i);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
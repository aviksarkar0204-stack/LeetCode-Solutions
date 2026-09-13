class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset;
    void dfs (int i,vector<int>& nums){
        if (i >= nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        dfs(i+1,nums);
        subset.pop_back();
        dfs(i+1,nums);
    }
    vector<vector<int>> subsets (vector<int>& nums) {
        dfs(0,nums);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
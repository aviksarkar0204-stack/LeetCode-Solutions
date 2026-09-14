class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> used;
    void dfs(vector<int>& nums){
        if (path.size() == nums.size()){
            result.push_back(path); 
            return;
        }
        for (int i = 0; i < nums.size(); i++){
            if (used[i]){
                continue;
            }
            used[i] = true;
            path.push_back(nums[i]);
            dfs(nums);
            path.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        used.resize(nums.size(), false);
        dfs(nums);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
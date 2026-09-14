class Solution {
public:
    vector<vector<int>> result;
    vector<int> subset;
    void dfs (vector<int>& nums, int i){
        if (i >= nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        dfs(nums,i+1);
        subset.pop_back();
        int j = i;
        while (j < nums.size() && nums[j] == nums[i]){
            j++;
        }
        dfs(nums,j);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(nums,0);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
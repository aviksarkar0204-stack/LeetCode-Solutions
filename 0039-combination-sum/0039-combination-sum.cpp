class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;

        function<void(int,int)> dfs = [&](int i, int total) {
            if (total == target) {
                res.push_back(cur);
                return;
            }
            if (i >= candidates.size() || total > target) {
                return;
            }

            // include candidates[i]
            cur.push_back(candidates[i]);
            dfs(i, total + candidates[i]); // stay at i (can reuse same number)
            cur.pop_back();

            // skip candidates[i]
            dfs(i + 1, total);
        };

        dfs(0, 0);
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
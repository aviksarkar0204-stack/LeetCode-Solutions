class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxCount = 0;
        for (int dx = -(n-1); dx < n; dx++){
            for (int dy = -(n-1); dy < n; dy++){
                int count = 0;
                for (int i = 0; i < n; i++){
                    if (i + dx < 0 || i + dx >= n) continue;
                    for (int j = 0; j < n; j++){
                        if (j + dy < 0 || j + dy >= n) continue;
                        if (img1[i + dx][j + dy] == 1 && img2[i][j] == 1){
                            count++;
                        }
                    }
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
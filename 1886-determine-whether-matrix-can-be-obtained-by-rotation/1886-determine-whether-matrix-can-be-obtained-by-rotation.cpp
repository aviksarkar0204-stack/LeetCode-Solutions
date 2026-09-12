class Solution {
public:
    void rotate90(vector<vector<int>>& matrix){
        auto n = matrix.size();
        for (int i = 0 ; i < n; i++){
            for (int j = i; j < n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++){
                reverse(matrix[i].begin(),matrix[i].end());
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++){
            if(mat == target){
                return true;
            }
            if(mat != target){
                rotate90(mat);
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
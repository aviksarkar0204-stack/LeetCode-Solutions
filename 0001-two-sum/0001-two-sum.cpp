#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> indexed;
        for (int i = 0; i < nums.size(); i++) {
            indexed.push_back({nums[i], i});
        }

        sort(indexed.begin(), indexed.end());

        int left = 0;
        int right = indexed.size() - 1;

        while (left < right) {
            int sum = indexed[left].first + indexed[right].first;
            if (sum == target) {
                return {indexed[left].second, indexed[right].second};
            }
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
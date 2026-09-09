class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int left = 0;
        int right = size - 1;
        while(left<right){
            auto sum = numbers[left] + numbers[right];
            if(sum == target){
                return {left+1,right+1};
            }
            if(sum < target){
                left++;
            }else{
                right--;
            }
        }
        return{-1,-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
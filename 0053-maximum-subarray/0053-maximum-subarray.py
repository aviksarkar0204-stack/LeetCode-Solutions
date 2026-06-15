class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        arr = nums
        current_sum = 0
        max_sum = nums[0]
        for i in range(0,len(nums)):
            current_sum += arr[i]
            if current_sum > max_sum:
                max_sum = current_sum
            if current_sum < 0:
                current_sum = 0
        return max_sum  
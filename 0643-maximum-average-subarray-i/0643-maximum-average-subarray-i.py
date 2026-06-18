class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window_sum = sum(nums[0:k])
        average_window = window_sum/k
        max_average = average_window
        for n in range(k,len(nums)):
            window_sum = window_sum + nums[n] - nums[n - k]
            average_window = window_sum / k
            max_average = max(max_average,average_window)
        return max_average

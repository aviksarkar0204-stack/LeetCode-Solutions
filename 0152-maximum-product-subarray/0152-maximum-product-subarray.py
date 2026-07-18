class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        max_current_product = min_current_product = result = nums[0]
        for i in range(1,len(nums)):
            num = nums[i]
            if num < 0:
                max_current_product,min_current_product = min_current_product,max_current_product
            max_current_product = max(num,max_current_product * num)
            min_current_product = min(num,min_current_product * num)
            result = max(result,max_current_product)
        return result
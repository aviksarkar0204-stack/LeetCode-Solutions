def maxProduct(nums):
    max_product = nums[0]
    
    for i in range(len(nums)):
        product = 1
        for j in range(i, len(nums)):
            product *= nums[j]
            max_product = max(max_product, product)
    
    return max_product

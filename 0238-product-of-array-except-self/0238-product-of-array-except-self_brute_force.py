def productExceptSelf(nums):
    answer = []
    
    for i in range(len(nums)):
        product = 1
        for j in range(len(nums)):
            if j != i:              ← skip current index
                product *= nums[j]
        answer.append(product)
    
    return answer

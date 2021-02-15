#class Solution:
#    def missingNumber(self, nums: List[int]) -> int:
#       nums.sort()
#        for i in range(len(nums)):
#            if nums[i]!=i :
#                return i
#                break
#            if i==len(nums)-1:
#                return len(nums)

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        x,y=0,0
        for i in range(len(nums)):
            x=x^i
            y=y^nums[i]
        x=x^(len(nums))
        return y^x
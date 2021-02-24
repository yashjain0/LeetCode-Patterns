class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        i=0
        while i <len(nums): 
            if ((i<len(nums)-2) and nums[i]==nums[i+1] ):
                i+=2
            else:
                return nums[i]
                break
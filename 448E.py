class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        nums.sort()
        A=list()
        k=0
        print(nums)
        for i in range(1,len(nums)+1):
            for j in range(k,len(nums)):
                if i==nums[j]:
                    break
                elif i>nums[j] and j!=len(nums)-1:
                    continue
                elif i<nums[j]:
                    A.append(i)
                    break
                elif j==len(nums)-1:
                    A.append(i)
                    break
            k=j     
        return A

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        A=list()
        for i in range(len(nums)):
            
            nums[abs(nums[i])-1]=abs(nums[abs(nums[i])-1])*(-1)
        for i in range(len(nums)):
            if(nums[i]>0):
                A.append(i+1)
        return A
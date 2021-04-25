class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        n=len(nums);
        c=[0]*n
        ans=list()
        for i in range(n):
            c[nums[i]-1]+=1
        for i in range(n):
            if(c[i]==2):
                ans.append(i+1)
        return ans;

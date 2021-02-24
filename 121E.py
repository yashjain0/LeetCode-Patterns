class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi=float('-inf')
        mini=float('inf')
        if len(prices)<=1:
            return 0
        else:
            for i in prices:
                mini=min(i,mini)
                cpro=i-mini
                maxi=max(cpro,maxi)
            return maxi
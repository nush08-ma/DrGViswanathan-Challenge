#Leetcode-1.Two Sum

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans={}
        for i in range(len(nums)):
            a=target-nums[i]
            if a in ans:
                return ans[a],i
            ans[nums[i]]=i
        return []

print(Solution().twoSum([2, 7, 11, 15], 9))

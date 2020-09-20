#Q.Two Sum (https://leetcode.com/problems/two-sum/)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        """
        Questions: Is it sorted? contain Negative nos? Duplicates?
        Method 1: Nested loops (O(n^2) T;O(1) S)
        Method 2: Two-pointer method; if sorted(O(n) T;O(1) S)        
        Method 3: Hash table(O(n) ST)
        """
        mapdict ={}
        for i, value in enumerate(nums):
            if target-value in mapdict:
                return [mapdict[target - value], i]
            else:
                mapdict[value] =i

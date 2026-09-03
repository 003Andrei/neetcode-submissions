class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        collect = []
        for x in nums:

            if x in collect:
                return True
            collect.append(x)
        return False
    
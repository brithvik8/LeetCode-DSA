class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        dupli = len(nums)!=len(set(nums))
        return dupli
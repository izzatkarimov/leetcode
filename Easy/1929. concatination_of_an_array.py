class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
            return nums * 2
    
#Solution 2
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        result = []
        for i in range(2):
            for n in nums:
                result.append(n)
        return result
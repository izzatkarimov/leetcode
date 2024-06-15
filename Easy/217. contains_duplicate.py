# 217. Contains Duplicate
# Difficulty: Easy

#Solution
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool: #The method is expected to return a boolean value (-> bool), indicated by the return type hint
        hashset = set() #Initiliazing an empty hashset. A set is an unordered collection that does not allow duplicate elements.

        for n in nums: #A for loop to go through, or to iterate over, every value in the input array.
            if n in hashset: #Is n a duplicate?
                return True #If it is a duplicate, then return True
            hashset.add(n) #If n is not in the hashset, then add n to the hashset
        return False #return False once the foor loop completes to indicate that the list nums does not contain any duplicates
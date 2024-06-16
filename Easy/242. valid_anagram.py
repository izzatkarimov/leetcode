# Solution 1 - Hashmap #
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): #if the lengths of s and t are different, then return False since they would not be anagrams if they had different lenths 
            return False
        
        hashmapS, hashmapT = {}, {} #Initializing two hashmap

        for i in range(len(s)): #Iterating through the length of the string s
            hashmapS[s[i]] = 1 + hashmapS.get(s[i], 0) #Every time we see a character, we want to increment the count of that character by one. But, that character may not exist in the hashmap yet, which would result in a key error. To get around that, we use get(). Second parameter of get() is a default value. In this case, the default value in get() function is 0. This basically means that if the key does not exist in the hashmap, then the default value is 0. 
            hashmapT[t[i]] = 1 + hashmapT.get(t[i], 0) #Doing the same thing for String t

        for c in hashmapS: #Iterating over the each character to make sure that the counts are the same
            if hashmapS[c] != hashmapT.get(c, 0): # If the counts are different, return False
                return False
        return True #if the method has not returned False at this point, it means that the frequencies match between s and t, and that returns True.

# Solution 2 - Using the Counter() Method in Python #

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t) # Counter is a data structure in Python that counts automatically. While this is just as efficient as the first solution, it would not be ideal in an interview.

# Solution 3 - Sorting#
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t) 
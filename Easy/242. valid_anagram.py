# Solution 1 - Hashmap #
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        hashmapS, hashmapT = {}, {}

        for i in range(len(s)):
            hashmapS[s[i]] = 1 + hashmapS.get(s[i], 0)
            hashmapT[t[i]] = 1 + hashmapT.get(t[i], 0)

        for c in hashmapS:
            if hashmapS[c] != hashmapT.get(c, 0):
                return False
        return True

# Solution 2#

# Solution 3#
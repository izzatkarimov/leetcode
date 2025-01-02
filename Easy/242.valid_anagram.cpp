class Solution {
public:
    bool isAnagram(string s, string t) {
        // given 2 strings - s & t
        // return a boolean
        
        // anagrams should be the same length
        if (s.length() != t.length()) {
            return false;
        }

        // array of 26 to represent all letters in English
        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++; // add 1 for each letter in s
            count[t[i] - 'a']--; // subtract 1 for each letter in t
        }

        // if s & t are anagrams, all counts will become 0
        // checking if all counts are zero
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};
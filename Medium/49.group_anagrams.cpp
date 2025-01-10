class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // given integer strs
        // need to return group of strings
        // hashmap
        unordered_map<string, vector<string>> res; // hashmap to store strings by their letter frequency
        // vector to count the frequencey -> count the frequency of each character in the string -> increment the count
        for (const auto& s : strs) {
            vector <int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            // convert vector to string
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            // strings with the same key are grouped in the hash map
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};

// time: O(m * n)
// space: O(m)
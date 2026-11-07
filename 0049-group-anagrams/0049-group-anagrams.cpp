// The important concept:

// mp[key] gives you access to the value, and what you can do next depends on the value's data type.
// - unordered_map<string, int> → mp[key] = 10
// - unordered_map<string, vector<int>> → mp[key].push_back(10)
// - unordered_map<string, string> → mp[key] = "hello"

//tc - O(nklogk)  sc - O(n.k)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>>result;
        
        for(int i = 0; i < strs.size(); i++){
            string s = strs[i];
            sort(s.begin(), s.end());

            map[s].push_back(strs[i]);

        }
        for(auto it : map){
            result.push_back(it.second);
        }

        return result;
    }
};
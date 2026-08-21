class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        for(string s:strs){
            string k = s;
            sort(k.begin(), k.end());
            ans[k].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair: ans){
            res.push_back(pair.second);
        }
        return res;
    }
};

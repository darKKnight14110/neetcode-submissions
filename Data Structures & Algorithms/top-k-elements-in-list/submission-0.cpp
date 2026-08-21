class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> c;
        for(int i:nums) c[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<>> ans;
        for (auto& [val, freq] : c) {
            ans.push({freq, val});
            if (ans.size() > k) ans.pop();
        }
        vector<int> r;
        while (!ans.empty()) {
        r.push_back(ans.top().second);
        ans.pop();
    }
    return r;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int l = strs[0].length();
        string ans = "";
        for(string s:strs){
            if(l>s.length()) l=s.length();
        }
        for(int i=0;i<l;i++){
            char j = strs[0][i];
            for(string s:strs){
                if(s[i]!=j) return ans; 
            }
            ans += j;
        }
        return ans;
    }
};
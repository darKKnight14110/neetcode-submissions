class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hashs(122,0);
        if(s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++){
            hashs[s[i]]++;
            hashs[t[i]]--;
        }
        for(auto c:hashs){
            if(c!=0) return false;
        }
        return true;
    }
};

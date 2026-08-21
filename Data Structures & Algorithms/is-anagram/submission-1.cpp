class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> a;
      if(s.length()!=t.length()) return false;
      for(int i=0;i<s.length();i++){
        a[s[i]]++;
        a[t[i]]--;
      }
      for(auto& pair:a){
        if(pair.second!=0) return false;
      }   
      return true;
    }
};

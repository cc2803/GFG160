class Solution {
  public:

    bool areAnagrams(string& s1, string& s2) {
//sort strings and check if lengths are equal, only then compare them or directly output "false"
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        if(s1.length()!=s2.length()) return false;
    
        return s1==s2;
    }
};

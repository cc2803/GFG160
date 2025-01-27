class Solution {
  public:

    char nonRepeatingChar(string &s) {

        unordered_map<char,int> d;
        
        for(char c:s){
            d[c]++;
        }
        
        for(char c:s){
            if(d[c]==1) return c;
        }
        return '$';

    }
};
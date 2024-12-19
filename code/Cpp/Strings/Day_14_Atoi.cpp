class Solution {
  public:
    int myAtoi(char *s) {
        
        int sign=1;
        long int res=0;
        int n=strlen(s);
        int i=0;
        
        while(i<n && s[i]==' '){
            i++;
        }
        
        while(i<n && (s[i]=='-'||s[i]=='+')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        
        while(i<n && '0'<=s[i] && s[i]<='9'){
            res = res*10 + (s[i] - '0');
            i++;
        }
        res*=sign;
        
        if(res>INT_MAX) res=INT_MAX;
        else if(res<INT_MIN) res=INT_MIN;
        
        return res;
        
    }
};
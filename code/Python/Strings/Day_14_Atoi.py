class Solution:
    def myAtoi(self, s: str) -> int:
        i=0
        n=len(s)
        sign=1
        res=0
        
        while i<n and s[i]==' ':
            i+=1
        
        if i<n and (s[i]=='-' or s[i]=='+'):
            if s[i]=='-':
                sign = -1
            i+=1
        
        while i<n and '0'<=s[i]<='9':
            res = res*10 + (ord(s[i])-ord('0'))
            i+=1
        
        res*=sign
        
        maxlim = 2**31 - 1
        minlim = -2**31
        
        if res > maxlim:
            return maxlim
        if res < minlim:
            return minlim
        
        return res

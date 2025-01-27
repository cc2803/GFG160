class Solution:
    
    #Function to find the first non-repeating character in a string.
    def nonRepeatingChar(self,s):
        
        d={}
        for i in s:
            d[i] = d.get(i,0)+1
        
        for i in s:
            if d[i]==1:
                return i
        
        return "$"
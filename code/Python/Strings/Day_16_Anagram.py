class Solution:
    
    def records(self,s):
        d={}
        for i in s:
            d[i]=d.get(i,0)+1
        return d

    def areAnagrams(self, s1, s2):
        d1 = self.records(s1)
        d2 = self.records(s2)
    
        return d1==d2

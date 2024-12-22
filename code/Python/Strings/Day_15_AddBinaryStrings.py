class Solution:
    
  @staticmethod
  def trimzeros(s):
    first1 = s.find('1')
    return s[first1:] if first1!=-1 else '0'
    
	def addBinary(self, s1, s2):
    
		n1=len(s1)
		n2=len(s2)
		
	    res=""
	    carry=0
	    
	    i,j=n1-1,n2-1
	    
	    while i>=0 or j>=0 or carry:
	        bit1 = int(s1[i]) if i>=0 else 0
            bit2 = int(s2[j]) if j>=0 else 0
            
            sum = bit1+bit2+carry
            res+=str(sum%2)
            carry=sum//2
            i-=1
            j-=1
            
        res = self.trimzeros(res[::-1])
        return res

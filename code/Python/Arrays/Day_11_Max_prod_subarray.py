class Solution:
	def maxProduct(self,arr):
  
    max_val,min_val,res=1,1,0
    n=len(arr)
    
    if n==1:
        return arr[0]
    
    for i in range(n):
        
        if arr[i]<0:
            max_val,min_val=min_val,max_val
        
        max_val = max(arr[i],max_val*arr[i])
        min_val=min(arr[i],min_val*arr[i])
    
    res=max(res,max_val)
		
	return res

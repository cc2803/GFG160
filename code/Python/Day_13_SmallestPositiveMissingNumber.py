class Solution:
    
    def missingNumber(self,arr):
        num = 1
        arr=set(arr)
        for i in arr:
            if i == num:
                num += 1
        
        return num

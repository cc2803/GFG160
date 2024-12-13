class Solution:
    def reverseArray(self, arr):
        
        l=len(arr)
        half_len= l//2 if (l)%2==0 else l//2+1 
        for i in range(0,half_len):
            arr[i],arr[l-i-1]=arr[l-i-1],arr[i]

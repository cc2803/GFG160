class Solution:
    def getMinDiff(self, arr,k):
        # code here
        n=len(arr)
        arr.sort()
        min_diff=arr[n-1]-arr[0]
        diff=0

        for i in range(1,n):
            if arr[i]-k<0:
                continue
            
            tallest=max(arr[n-1]-k,arr[i-1]+k)
            shortest=min(arr[0]+k,arr[i]-k)
            diff=tallest-shortest
            min_diff=min(min_diff,diff)
            
        return min_diff

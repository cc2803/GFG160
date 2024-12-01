class Solution:
    def rotateArr(self, arr, d):
            d=d%len(arr)
            arr[:]= arr[d:]+arr[:d]

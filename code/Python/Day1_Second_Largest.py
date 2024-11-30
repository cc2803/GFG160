class Solution:
    def getSecondLargest(self, arr):
        if len(arr)<2:
            return -1
        
        max_element = max(arr)
        
        res_arr = [i for i in arr if i!=max_element]
        
        if res_arr!=[]:
            return max(res_arr)
        else:
            return -1

class Solution:
    def maxSubArraySum(self,arr):
        
        max_so_far = arr[0]  # Initialize with the first element
        max_ending_here = arr[0]
    
        for i in range(1, len(arr)):
            max_ending_here = max(arr[i], max_ending_here + arr[i])  # Extend or start new subarray
            max_so_far = max(max_so_far, max_ending_here)  # Update the overall maximum
    
        return max_so_far

'''
Kadane's algorithm:

Here, idea is to iterate through the array, try adding each element to a sum value (max_ending_here), essentially the sub_array's sum and check if it is worth adding the current number to the sum. Then also update the global maxima, i.e the final max sum answer as maximum of current max sum and the current max_ending_here value.
 
'''

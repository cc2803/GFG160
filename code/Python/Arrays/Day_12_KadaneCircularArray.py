def circularSubarraySum(arr):
    
    def kadane(arr):
        max_so_far = arr[0]  
        max_ending_here = arr[0]
    
        for i in range(1, len(arr)):
            max_ending_here = max(arr[i], max_ending_here + arr[i])  
            max_so_far = max(max_so_far, max_ending_here)  
    
        return max_so_far
    
    max_non_circular=kadane(arr)
    total=sum(arr)
    
    inverted_arr=[-x for x in arr]
    min_subarray_sum=kadane(inverted_arr)
    min_non_circular= -min_subarray_sum
    
    if total== min_non_circular:
        return max_non_circular
    else:
        return max(max_non_circular, total-min_non_circular)
    

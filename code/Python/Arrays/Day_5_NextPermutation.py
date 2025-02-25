def nextPermutation(arr):
    n = len(arr)
    
    # Step 1: Find the largest index k such that arr[k] < arr[k + 1]
    k = -1
    for i in range(n - 2, 0, -1):
        if arr[i] < arr[i + 1]:
            k = i
            break
    
    # If no such index exists, the array is the largest permutation
    if k == -1:
        arr.reverse()  #reverse the array to get the lowest permutation
        return arr
    
    # Step 2: Find the largest index l such that arr[k] < arr[l]
    l = -1
    for i in range(n - 1, k, -1):
        if arr[i] > arr[k]:
            l = i
            break
    
    # Step 3: Swap arr[k] and arr[l]
    arr[k], arr[l] = arr[l], arr[k]
    
    # Step 4: Reverse the suffix starting at k + 1 to ensure actual next permutation
    arr[k + 1:] = reversed(arr[k + 1:])
    
    return arr
    
res = nextPermutation([2,4,1,5,7,0])
print(res)

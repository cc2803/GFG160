class Solution:
    # Function to find the majority elements in the array
    def findMajority(self, arr):
        elements={}
        mj_ele=[]
        n=len(arr)
        for i in arr:
            if i not in elements:
                elements[i]=1
            else:
                elements[i]+=1
        
        for key in elements.keys():
            if elements[key]>n/3:
                mj_ele.append(key)
                
        return sorted(mj_ele)

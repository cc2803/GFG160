class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        
        int max_so_far=arr[0]; //global maxima value
        int max_ending_here=arr[0]; //value to track sub array sum
        
        for(int i=1;i<arr.size();i++){
            
            max_ending_here=max(max_ending_here+arr[i],arr[i]);
            max_so_far=max(max_so_far,max_ending_here);
                
        }
        return max_so_far;
    }
};

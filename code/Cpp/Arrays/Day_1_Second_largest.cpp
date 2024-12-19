#include<climits>

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        if(arr.size()<2) return -1;
        
        int first=INT_MIN,second=INT_MIN;
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i]>first && arr[i]>second) {
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second && arr[i]<first) second=arr[i];
            else continue;
        }
        if (INT_MIN!=second) return second;
        else return -1;
        
    }
};

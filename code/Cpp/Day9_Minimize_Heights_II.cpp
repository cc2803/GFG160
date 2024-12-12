class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
     
     sort(arr.begin(),arr.end());
     int n=arr.size();
     int min_diff = arr[n-1]-arr[0];
     int diff=0;
     
     
     for(int i=1;i<n;i++){
        if(arr[i]-k<0) continue;
         
        int max_h=max(arr[n-1]-k,arr[i-1]+k);
        int min_h=min(arr[0]+k,arr[i]-k);
        diff=max_h-min_h;
        min_diff=min(min_diff,diff);
     }
     return min_diff;
    }
};

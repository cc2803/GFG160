class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        
        int n = arr.size();
        int k=-1,l=-1;
        
        for(int i=n-2;i>-1;i--){
            if(arr[i]<arr[i+1]){
                k=i;
                break;
            }
        }
        
        if(k==-1){
            sort(arr.begin(),arr.end());
            return;
        }
        
        
        for(int i=n-1;i>k;i--){
            if(arr[i]>arr[k]) {l=i;
                break;
            }
        }
        
        int temp=arr[k];
        arr[k]=arr[l];
        arr[l]=temp;
        
        reverse(arr.begin() + k + 1, arr.end());
    }
};

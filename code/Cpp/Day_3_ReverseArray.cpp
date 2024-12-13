class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        int l=arr.size();
        int half_len = l%2==0?(int)l/2:int(l)/2+1;
        
        for(int i=0;i<half_len;i++){
            int temp = arr[l-i-1];
            arr[l-i-1] = arr[i];
            arr[i]=temp;
        }
        
    }
};

class Solution {
  public:

    void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;  
    vector<int> shift_arr={arr.begin(),arr.begin()+d};
    
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }
    
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = shift_arr[i];
    }
}
};

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        
        int posindex=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                arr[posindex]=arr[i];
                posindex++;
            }
        }
        for(int i=posindex;i<arr.size();i++){
            arr[i]=0;
        }
        
    }
};

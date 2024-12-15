class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        
        int max_so_far=1;
        int min_so_far=1;
        int result=0;
        int n=arr.size();
        
        if(n==1) return arr[0];
        
        for(int i=0;i<n;i++){
        int num=arr[i];
        
        if(num<0){
            int temp=max_so_far;
            max_so_far=min_so_far;
            min_so_far=temp;
        }
        
        max_so_far = max(num, max_so_far * num);
        min_so_far = min(num, min_so_far * num);   
        
        result=max(result,max_so_far);
        }
        
        return result;
    }
    
};

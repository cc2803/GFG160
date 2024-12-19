class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        
        vector<int> res;
        int n=arr.size();
        if(n==0) return {};
        
        int candidate1=0,candidate2=0,count1=0,count2=0;
        
        for(int i:arr){
            if(i==candidate1) count1++;
            else if(i==candidate2) count2++;
            else if(count1==0){
                candidate1=i;
                count1=1;
            }
            else if(count2==0){
                candidate2=i;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for (int num:arr) {
            if(num==candidate1) count1++;
            else if(num==candidate2) count2++;
        }

        vector<int> result;
        if(count1>n/3) result.push_back(candidate1);
        if(count2>n/3) result.push_back(candidate2);
        
        sort(result.begin(), result.end());
        return result;
        
        
    }
};

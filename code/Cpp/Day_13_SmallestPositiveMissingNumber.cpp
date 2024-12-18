class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        set<int> k; //to remove duplicates
        int num=1;
        for(int i:arr){
            k.insert(i);
        }
        for(int i:k){
            if(i==num) num++;
        }
        return num;
    }
};

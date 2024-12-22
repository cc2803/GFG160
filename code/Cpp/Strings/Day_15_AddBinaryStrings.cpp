class Solution {
  public:
  
    string trimzeros(string& s){
        string res="";
        int first_1_index=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                first_1_index=i;
                break;
            }
        }
        if (first_1_index == 0 && s[0] == '0') return "0";
        res = s.substr(first_1_index);
        return res;
    }
    
    string addBinary(string& s1, string& s2) {
        
        s1 = trimzeros(s1);
        s2 = trimzeros(s2);
        
        int n1 = s1.length();
        int n2 = s2.length();
        
        if(n1<n2){
            swap(n1,n2);
            swap(s1,s2);
        } 
        
        int j=n2-1;
        int carry=0;
        vector<char>res;
        
        for(int i=n1-1;i>-1;i--){
                int bit1 = s1[i]-'0';
                int bitsum = bit1+carry;
                
                if(j>=0){
                    int bit2 = s2[j]-'0';
                    bitsum+=bit2;
                    j--;
                }
              int bit = bitsum%2;
              carry  = bitsum/2;
            
              res.push_back(bit+'0');
        }
        
        if(carry>0){
            res.push_back('1');
        }
        
        reverse(res.begin(),res.end());
        return string(res.begin(),res.end());
        
    }
};

//Constraint: JUST ONE TRANSACTION TO MAXIMISE PROFIT

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
    
        int min_price=prices[0];
        int profit=0;
        
        for(int i:prices){
            if(i<min_price) min_price=i;
            
            else{
                profit= max(profit,i-min_price)   ;     
            }
        }
        return profit;
    }
};

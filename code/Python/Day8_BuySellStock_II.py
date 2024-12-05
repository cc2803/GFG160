#JUST ONE TRANSACTION ALLOWED HERE

class Solution:
    def maximumProfit(self, prices):
        # code here
        min_price=float("inf")
        max_profit=0
        
        for price in prices:
            if price<min_price:
                min_price=price
            else:
                max_profit = max(max_profit,price-min_price)
        
        return max_profit


    int maxProfit(vector<int>& prices) {
        int mn =prices[0];
        int profit =0;

        for(int i=0;i<prices.size();i++){
            int cost = prices[i] - mn;
            profit = max(cost, profit);
            mn = min(mn, prices[i]);
        }
        return profit;
    }

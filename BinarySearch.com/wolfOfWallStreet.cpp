// https://binarysearch.com/problems/Wolf-of-Wall-Street
int solve(vector<int>& prices) {
    int profit = 0;
    int maxprofit = 0;
    if (prices.size() == 0) return 0;
    for (int i = 0; i < prices.size() - 1; i++) {
        if (prices[i] <= prices[i + 1]) 
        {
            profit = profit + (prices[i + 1] - prices[i]);
            if (profit > maxprofit) 
                maxprofit = profit;
        } 
        else {
            int newval=profit+(prices[i+1]-prices[i]);
            if(newval>=0)
                profit=newval;
            else
            profit=0;
        }
    }
    return maxprofit;
}
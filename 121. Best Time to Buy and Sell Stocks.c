int maxProfit(int* prices, int pricesSize) {
    if (prices==0) {
        return 0;
       }

       int buy = prices[0];
       int sell = 0;

       for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < buy) {
            buy = prices[i];
        }
        else {
            int profit = prices[i] - buy;
            if (profit > sell) {
                sell = profit;
            }
        }
    }
    
    return sell;
}

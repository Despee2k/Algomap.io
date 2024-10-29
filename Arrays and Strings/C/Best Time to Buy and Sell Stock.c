int maxProfit(int* prices, int pricesSize) {
    int buy = prices[0];
    int profit = 0;
    int maxProfit = 0;
    for(int i = 1; i < pricesSize; i++){
        profit = prices[i] - buy;
        if(prices[i] < buy){
            buy = prices[i];
        }
        if(profit > maxProfit) maxProfit = profit;
    }
    if(maxProfit > 0) return maxProfit;
    return 0;
}
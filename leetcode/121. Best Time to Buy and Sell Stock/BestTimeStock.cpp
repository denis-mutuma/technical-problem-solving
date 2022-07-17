class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = prices[0], maxProfit = 0;
        for (const int price : prices)
        {
            int profit = price - minPrice;
            maxProfit = max(maxProfit, profit);
            minPrice = min(price, minPrice);
        }
        return maxProfit;
    }
};
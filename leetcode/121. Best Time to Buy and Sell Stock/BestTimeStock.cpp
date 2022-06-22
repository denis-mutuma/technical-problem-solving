class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit{0};
        int minPrice = prices[0];

        for (int num : prices)
        {
            if (num < minPrice)
            {
                minPrice = num;
            }
            int profit = num - minPrice;
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
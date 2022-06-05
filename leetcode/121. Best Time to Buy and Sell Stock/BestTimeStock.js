/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    // [7,1,5,3,6,4]
    let minPrice = prices[0]
    let j = 1;
    let profit = 0;
    let prevProfit = profit;
    while (j < prices.length) {
        profit = prices[j] - minPrice;
        if (profit > prevProfit) {
            prevProfit = profit;
        }
        if (prices[j] < minPrice) {
            minPrice = prices[j];
        }
        j++;
    }
    return prevProfit;
};
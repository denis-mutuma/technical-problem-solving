func maxProfit(prices []int) int {
	minPrice, maxProfit := prices[0], 0
	for _, price := range prices {
		profit := price - minPrice
		maxProfit = max(maxProfit, profit)
		minPrice = min(minPrice, price)
	}
	return maxProfit
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}
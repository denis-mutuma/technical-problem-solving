class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, maxSum = nums[0];
        for (const int num : nums)
        {
            sum += num;
            maxSum = max(sum, maxSum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxSum;
    }
};
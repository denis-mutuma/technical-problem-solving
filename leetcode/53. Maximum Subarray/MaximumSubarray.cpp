class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return nums[0];
        }

        int maxSum = nums[0];
        int sum = 0;

        for (const int num : nums)
        {
            sum += num;
            if (sum > maxSum)
            {
                maxSum = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxSum;
    }
};
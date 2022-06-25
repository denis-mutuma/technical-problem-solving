class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int low = i + 1, high = nums.size() - 1;

            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            while (low < high)
            {
                if (nums[low] + nums[high] + nums[i] == 0)
                {
                    result.push_back({nums[i], nums[low], nums[high]});
                    int temp1 = nums[low];
                    while (low < high && nums[low] == temp1)
                        low++;
                    int temp2 = nums[high];
                    while (low < high && nums[high] == temp2)
                        high--;
                }
                else if (nums[low] + nums[high] + nums[i] > 0)
                {
                    high--;
                }
                else if (nums[low] + nums[high] + nums[i] < 0)
                {
                    low++;
                }
            }
        }
        return result;
    }
};
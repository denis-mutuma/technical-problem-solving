class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                result.push_back(i);
                result.push_back(m.find(target - nums[i])->second);
                return result;
            }
            else
            {
                m.emplace(nums[i], i);
            }
        }
        return result;
    }
};
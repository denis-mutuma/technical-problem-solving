class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m = {};

        vector<int> answer{};

        for (int i = 0; i < nums.size(); i++)
        {
            auto search = m.find(target - nums[i]);
            if (search != m.end())
            {
                answer.emplace_back(search->second);
                answer.emplace_back(i);
                return answer;
            }
            else
            {
                m.emplace(make_pair(nums[i], i));
            }
        }
        return nums;
    }
};
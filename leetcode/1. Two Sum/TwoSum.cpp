class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> comp{};
        vector<int> res{};
        int i = 0;
        for (auto &num : nums)
        {
            auto search = comp.find(target - num);
            if (search != comp.end())
            {
                res.emplace_back(i);
                res.emplace_back(search->second);
                return res;
            }
            else
            {
                comp.emplace(make_pair(num, i));
            }
            i++;
        }
        return res;
    }
};
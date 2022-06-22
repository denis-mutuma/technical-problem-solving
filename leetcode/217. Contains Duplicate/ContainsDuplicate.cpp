class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> m{};

        for (int &num : nums)
        {
            auto search = m.find(num);
            if (search != m.end())
            {
                return true;
            }
            else
            {
                m.emplace(make_pair(num, 1));
            }
        }
        return false;
    }
};
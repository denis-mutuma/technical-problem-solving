class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> m{};
        for (int i : nums)
        {
            auto search = m.find(i);
            if (search != m.end())
            {
                return true;
            }
            else
            {
                m.emplace(make_pair(i, 1));
            }
        }
        return false;
    }
};
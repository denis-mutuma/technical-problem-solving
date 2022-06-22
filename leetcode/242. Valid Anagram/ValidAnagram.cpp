class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        map<char, int> m{};
        for (auto &chr : s)
        {
            m[chr]++;
        }
        for (auto &chr : t)
        {
            m[chr]--;
        }

        for (auto val : m)
        {
            if (val.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
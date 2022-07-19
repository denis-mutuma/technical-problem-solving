class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {

        if (s2.length() < s1.length())
            return false;

        map<char, int> m1;
        map<char, int> m2;

        for (const char chr : s1)
        {
            m1[chr]++;
        }

        int n = s1.length();
        int low = 0, high = n - 1;

        for (int i = 0; i < n; i++)
        {
            m2[s2[i]]++;
        }

        while (high < s2.length())
        {
            bool flag = true;
            for (auto &[k, v] : m1)
            {
                auto search = m2.find(k);
                if (search->second != v)
                {
                    m2[s2[low]]--;
                    high++;
                    m2[s2[high]]++;
                    low++;
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                return true;
            }
        }
        return false;
    }
};
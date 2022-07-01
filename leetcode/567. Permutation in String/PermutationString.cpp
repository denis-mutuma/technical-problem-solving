class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {

        if (s2.length() < s1.length())
            return false;

        map<char, int> m1;
        map<char, int> m2;

        for (char i = 'a'; i <= 'z'; i++)
        {
            m1[i] = 0;
            m2[i] = 0;
        }

        for (auto chr : s1)
        {
            m1[chr]++;
        }

        for (int i = 0; i < s1.length(); i++)
        {
            m2[s2[i]]++;
        }

        int matches = 0;
        int low = 0, high = s1.length() - 1;

        while (high < s2.length())
        {
            for (char i = 'a'; i <= 'z'; i++)
            {
                if (m1.find(i)->second != m2.find(i)->second)
                {
                    matches--;
                }
                else
                {
                    matches++;
                }
            }
            if (matches == 26)
            {
                return true;
            }
            m2[s2[low]]--;
            low++;
            high++;
            m2[s2[high]]++;
            matches = 0;
        }
        return false;
    }
};
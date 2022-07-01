class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int low = 0, high = 0;
        int count = 0, maxCount = 0;
        map<char, int> m;
        while (high < s.length())
        {
            m[s[high]]++;
            int mostFreq = 0;
            int mapSize = 0;
            for (auto chr : m)
            {
                mostFreq = max(mostFreq, chr.second);
                mapSize += chr.second;
            }
            if (mapSize - mostFreq <= k)
            {
                count++;
                high++;
                maxCount = max(maxCount, mapSize);
            }
            else
            {
                m[s[low]]--;
                low++;
                high++;
            }
        }
        return maxCount;
    }
};
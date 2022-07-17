class Solution
{
public:
    int characterReplacement(string s, int k)
    {

        map<char, int> m;
        int low = 0, high = 0, count = 0, maxCount = 0;

        while (high < s.length())
        {
            m[s[high]]++;
            int freqCount = 0, mapSize = 0;
            for (auto &[chr, charCount] : m)
            {
                freqCount = max(freqCount, charCount);
                mapSize += charCount;
            }
            if (mapSize - freqCount <= k)
            {
                count++;
            }
            else
            {
                mapSize--;
                m[s[low]]--;
                auto search = m.find(s[low]);
                if (search->second == 0)
                {
                    m.erase(s[low]);
                }
                count = mapSize;
                low++;
            }
            high++;
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
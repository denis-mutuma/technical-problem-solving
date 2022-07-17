class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        set<char> st;
        int low = 0, count = 0;
        for (const char chr : s)
        {
            while (st.find(chr) != st.end())
            {
                st.erase(s[low]);
                low++;
            }
            st.insert(chr);
            int size = st.size();
            count = max(count, size);
        }
        return count;
    }
};

//****************************************************

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        if (s.length() == 0)
            return 0;

        set<char> st;
        int low = 0, high = 0, count = 0, maxCount = 0;

        while (high < s.length())
        {
            while (st.find(s[high]) != st.end())
            {
                st.erase(s[low]);
                low++;
            }
            count = st.size();
            st.insert(s[high]);
            count++;
            maxCount = max(count, maxCount);
            high++;
        }
        return maxCount;
    }
};
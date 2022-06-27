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
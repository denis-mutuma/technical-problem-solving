class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> res(n, 0);
        stack<pair<int, int>> st;
        st.push(make_pair(temperatures[0], 0));
        for (int i = 1; i < temperatures.size(); i++)
        {
            auto prev = st.top();
            if (temperatures[i] > prev.first)
            {
                while (temperatures[i] > prev.first)
                {
                    res[prev.second] = i - prev.second;
                    st.pop();
                    if (!st.empty())
                        prev = st.top();
                    else
                        break;
                }
                st.push(make_pair(temperatures[i], i));
            }
            else
            {
                st.push(make_pair(temperatures[i], i));
            }
        }
        return res;
    }
};
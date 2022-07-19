class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {

        int n = temperatures.size();

        stack<pair<int, int>> st;
        vector<int> result(n, 0);

        st.push(make_pair(temperatures[0], 0));

        for (int i = 1; i < n; i++)
        {
            auto prev = st.top();
            while (!st.empty())
            {
                if (prev.first < temperatures[i])
                {
                    result[prev.second] = i - prev.second;
                    st.pop();
                }
                else
                {
                    break;
                }
                if (st.empty())
                    break;
                prev = st.top();
            }
            st.push(make_pair(temperatures[i], i));
        }
        return result;
    }
};
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st{};
        for (auto chr : s)
        {
            if (chr == '(' || chr == '{' || chr == '[')
            {
                st.push(chr);
            }
            else if (chr == ')' && !st.empty())
            {
                if (st.top() != '(')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else if (chr == '}' && !st.empty())
            {
                if (st.top() != '{')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else if (chr == ']' && !st.empty())
            {
                if (st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            else
            {
                return false;
            }
        }
        if (st.size())
        {
            return false;
        }
        return true;
    }
};
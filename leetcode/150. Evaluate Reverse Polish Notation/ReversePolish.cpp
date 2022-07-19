class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (const string token : tokens)
        {
            if (token != "+" && token != "-" && token != "*" && token != "/")
            {
                st.push(stoi(token));
                continue;
            }
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            if (token == "+")
            {
                st.push(first + second);
            }
            else if (token == "-")
            {
                st.push(second - first);
            }
            else if (token == "*")
            {
                st.push(first * second);
            }
            else if (token == "/")
            {
                st.push(second / first);
            }
        }
        return st.top();
    }
};
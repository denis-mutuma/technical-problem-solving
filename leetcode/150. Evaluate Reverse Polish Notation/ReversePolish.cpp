class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {

        stack<int> st;

        for (auto token : tokens)
        {
            if (token != "+" && token != "-" && token != "*" && token != "/")
            {
                st.push(atoi(token.c_str()));
                cout << atoi(token.c_str()) << endl;
            }
            else
            {
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
                else
                {
                    st.push(second / first);
                }
            }
        }
        int res = st.top();
        return res;
    }
};
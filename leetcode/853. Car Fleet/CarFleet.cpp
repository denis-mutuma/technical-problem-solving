class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        set<pair<int, double>> st;
        int i = 0;
        for (int num : position)
        {
            st.insert(make_pair(num, double(target - num) / speed[i]));
            i++;
        }

        stack<pair<int, double>> myStack;

        for (auto elem : st)
        {
            myStack.push(make_pair(elem.first, elem.second));
        }

        int count = 0;
        double currTop = 0.0;
        while (!myStack.empty())
        {
            auto top = myStack.top();
            currTop = top.second;
            myStack.pop();
            if (!myStack.empty())
                top = myStack.top();
            while (top.second <= currTop && !myStack.empty())
            {
                myStack.pop();
                if (!myStack.empty())
                    top = myStack.top();
            }
            count++;
        }
        return count;
    }
};
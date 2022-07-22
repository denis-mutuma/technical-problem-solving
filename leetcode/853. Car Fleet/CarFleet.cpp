class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {

        set<pair<int, double>> st;
        stack<pair<int, double>> myStack;

        for (int i = 0; i < position.size(); i++)
        {
            st.insert(make_pair(position[i], (double)(target - position[i]) / speed[i]));
        }

        for (auto elem : st)
        {
            myStack.push(make_pair(elem.first, elem.second));
        }

        int fleet = 0;

        while (!myStack.empty())
        {
            auto top = myStack.top();
            myStack.pop();
            while (!myStack.empty() && myStack.top().second <= top.second)
            {
                myStack.pop();
            }
            fleet++;
        }
        return fleet;
    }
};
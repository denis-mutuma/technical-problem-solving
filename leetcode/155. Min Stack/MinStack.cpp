class MinStack
{
public:
    stack<int> s, s_min;
    MinStack()
    {
    }

    void push(int val)
    {
        s.emplace(val);
        if (s_min.empty())
        {
            s_min.emplace(val);
        }
        else if (s_min.top() > val)
        {
            s_min.emplace(val);
        }
        else
        {
            s_min.emplace(s_min.top());
        }
    }

    void pop()
    {
        if (!s_min.empty() && !s.empty())
        {
            s.pop();
            s_min.pop();
        }
    }

    int top()
    {
        int top = 0;
        if (!s.empty())
        {
            top = s.top();
        }
        return top;
    }

    int getMin()
    {
        int min = 0;
        if (!s_min.empty())
        {
            min = s_min.top();
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
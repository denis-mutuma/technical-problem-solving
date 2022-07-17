class MinStack
{
public:
    vector<int> stack;
    vector<int> minStack;

    MinStack()
    {
    }

    void push(int val)
    {
        stack.push_back(val);
        if (minStack.size() == 0)
        {
            minStack.push_back(val);
        }
        else if (val < minStack[minStack.size() - 1])
        {
            minStack.push_back(val);
        }
        else
        {
            minStack.push_back(minStack[minStack.size() - 1]);
        }
    }

    void pop()
    {
        if (stack.size() > 0)
        {
            stack.pop_back();
            minStack.pop_back();
        }
    }

    int top()
    {
        if (stack.size() > 0)
        {
            return stack[stack.size() - 1];
        }
        return -1;
    }

    int getMin()
    {
        if (minStack.size() > 0)
        {
            return minStack[minStack.size() - 1];
        }
        return -1;
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

//*******************************************

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
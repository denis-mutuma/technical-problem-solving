class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;
        for (const int stone : stones)
        {
            pq.push(stone);
        }

        while (!pq.empty())
        {
            if (pq.size() == 1)
            {
                int top = pq.top();
                return top;
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (x != y)
            {
                pq.push(abs(x - y));
            }
        }
        return 0;
    }
};
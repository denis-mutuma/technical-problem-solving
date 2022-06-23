class KthLargest
{
public:
    priority_queue<int> pq;
    int kth = 0;
    KthLargest(int k, vector<int> &nums)
    {
        kth = k;
        for (const int num : nums)
        {
            pq.push(num * -1);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
    }

    int add(int val)
    {
        pq.push(val * -1);
        if (pq.size() > kth)
        {
            pq.pop();
        }
        int top = pq.top();
        return top * -1;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
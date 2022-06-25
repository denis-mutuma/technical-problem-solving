// solution one using a set

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        if (nums.size() == 0)
        {
            return 0;
        }

        set<int> s;

        for (const int num : nums)
        {
            s.insert(num);
        }
        int count = 1, maxCount = 1;
        for (const int num : s)
        {
            if (s.find(num + 1) != s.end())
            {
                count++;
            }
            else
            {
                count = 1;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};

// solution two using unordered set
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }

        unordered_set<int> s;
        for (const int num : nums)
        {
            s.insert(num);
        }

        int maxCount = 1;

        for (int num : s)
        {
            if (s.find(num - 1) == s.end())
            {
                int start = 1;
                while (true)
                {
                    if (s.find(num + start) != s.end())
                    {
                        start++;
                        maxCount = max(maxCount, start);
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        return maxCount;
    }
};

// solution three using a min-heap

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return 1;
        }

        priority_queue<int> pq;
        vector<int> vec;

        for (const int &num : nums)
        {
            pq.emplace(num * -1);
        }

        while (!pq.empty())
        {
            int top = pq.top();
            vec.emplace_back(top * -1);
            pq.pop();
        }

        int count = 0;
        int maxCount = 0;
        int i = 0, j = 1, extra = 0;

        while (j < vec.size())
        {
            if (vec[j] == vec[i] + 1)
            {
                count++;
                extra = 1;
            }
            else if (vec[j] == vec[i])
            {
                extra = 1;
            }
            else
            {
                count = 0;
            }
            if (count > maxCount)
            {
                maxCount = count;
            }
            i++;
            j++;
        }

        return maxCount + extra;
    }
};
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> m;
        for (auto num : nums)
        {
            m[num]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto &[k, v] : m)
        {
            pq.emplace(make_pair(v, k));
        }
        vector<int> res;
        while (k > 0)
        {
            auto top = pq.top();
            res.push_back(top.second);
            pq.pop();
            k--;
        }
        return res;
    }
};

//***************************************************

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        vector<int> result;
        vector<vector<int>> count(nums.size() + 1);
        unordered_map<int, int> m;

        for (const int &num : nums)
        {
            m[num]++;
        }

        for (const auto elem : m)
        {
            count[elem.second].push_back(elem.first);
        }

        for (int i = count.size() - 1; i >= 0; i--)
        {
            vector<int> temp = count[i];
            if (temp.size() == 0)
            {
                continue;
            }
            else
            {
                for (int i = 0; i < temp.size(); i++)
                {
                    result.push_back(temp[i]);
                }
            }
            if (result.size() == k)
            {
                break;
            }
        }

        return result;
    }
};
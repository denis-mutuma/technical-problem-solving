// iterative solution

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        if (nums.empty())
            return {{}};
        vector<vector<int>> result = {{}};

        for (int x : nums)
        {
            int n = result.size();
            for (int i = 0; i < n; i++)
            {
                vector<int> r = result[i];
                r.push_back(x);
                result.push_back(r);
            }
        }

        return result;
    }
};

// reccursive solution

class Solution
{
    void subsets_rec(vector<int> &nums, int idx, vector<vector<int>> &result)
    {
        if (idx == nums.size() - 1)
        {
            result.push_back({});
            result.push_back({nums[idx]});
        }
        else
        {
            subsets_rec(nums, idx + 1, result);
            int n = result.size();
            for (int i = 0; i < n; i++)
            {
                vector<int> r = result[i];
                r.push_back(nums[idx]);
                result.push_back(r);
            }
        }
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        if (nums.empty())
            return {{}};
        vector<vector<int>> result;
        subsets_rec(nums, 0, result);

        return result;
    }
};

// reccursive solution

class Solution
{
public:
    vector<vector<int>> ans;
    void ok(int x, vector<int> &nums, vector<int> curr)
    {
        ans.push_back(curr);
        for (int i = x; i < nums.size(); i++)
        {
            curr.push_back(nums[i]);
            ok(i + 1, nums, curr);
            curr.pop_back();
        }
        return;
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> curr;
        ok(0, nums, curr);
        return ans;
    }
};
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int step1 = 0;
        int step2 = 0;
        for (int i = cost.size() - 1; i >= 0; i--)
        {
            int curr = cost[i] + min(step1, step2);
            step1 = step2;
            step2 = curr;
        }
        return min(step1, step2);
    }
};

//***********************************************************

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {

        cost.emplace_back(0);
        for (int i = cost.size() - 3; i >= 0; i--)
        {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }
        return min(cost[0], cost[1]);
    }
};
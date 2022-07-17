class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
        {
            return n;
        }

        int prev1 = 1, prev2 = 2, next = 0;
        for (int i = 3; i <= n; i++)
        {
            next = prev1 + prev2;
            prev1 = prev2;
            prev2 = next;
        }
        return next;
    }
};

//**************************************

class Solution
{
public:
    int climbStairs(int n)
    {
        vector<int> res(n + 1);
        res[0] = 1;
        res[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            res[i] = res[i - 1] + res[i - 2];
        }
        return res[n];
    }
};
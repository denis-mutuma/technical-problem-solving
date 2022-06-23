class Solution
{
public:
    bool isHappy(int n)
    {
        map<int, int> m;
        while (n > 0)
        {
            if (n == 1)
            {
                return true;
            }
            n = sumSquares(n);

            auto search = m.find(n);
            if (search != m.end())
            {
                return false;
            }

            m.emplace(make_pair(n, 1));
        }
        return false;
    }

    int sumSquares(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int temp = num % 10;
            sum += temp * temp;
            num /= 10;
        }
        return sum;
    }
};
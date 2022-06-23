class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> res;
        for (int i = 0; i <= n; i++)
        {
            int bits = numOneBits(i);
            res.emplace_back(bits);
        }
        return res;
    }

    int numOneBits(int n)
    {
        int count = 0;
        while (n > 0)
        {
            int temp = n % 2;
            count += temp;
            n >>= 1;
        }
        return count;
    }
};
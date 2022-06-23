class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        uint32_t sum = 0;
        while (n > 0)
        {
            uint32_t temp = 0;
            temp = n % 2;
            sum += temp;
            n >>= 1;
        }
        return int(sum);
    }
};
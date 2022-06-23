class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int num = nums[0];
        for (auto i = nums.begin() + 1; i != nums.end(); i++)
        {
            num ^= *i;
        }
        return num;
    }
};
// solution one:
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// solution two:

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int i = 1;
        if (digits[n - i] == 9)
        {
            while (digits[n - i] == 9)
            {
                if (n - i == 0)
                {
                    if (digits[n - i] != 9)
                    {
                        digits[n - i] += 1;
                        return digits;
                    }
                    digits[n - i] = 0;
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
                digits[n - i] = 0;
                i++;
            }
            digits[n - i] += 1;
        }
        else
        {
            digits[n - 1] += 1;
        }
        return digits;
    }
};
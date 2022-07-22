class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {

        int low = 1, high = 0;

        for (const int pile : piles)
        {
            high = max(high, pile);
        }

        int result = high;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            long hours = 0;
            for (int num : piles)
            {
                hours += ceil((double)num / mid);
            }

            if (hours <= h)
            {
                result = min(result, mid);
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return result;
    }
};
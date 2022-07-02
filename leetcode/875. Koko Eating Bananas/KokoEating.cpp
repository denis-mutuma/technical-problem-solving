class Solution
{
public:
    int kokoTime(vector<int> &piles, int k)
    {
        int time = 0;
        for (int pile : piles)
        {
            int temp = pile / k;
            if (pile % k != 0 && pile > k)
            {
                temp++;
            }
            else if (pile % k != 0 && pile < k)
            {
                temp = 1;
            }
            time += temp;
        }
        return time;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {

        int high = piles[0];

        for (int num : piles)
        {
            high = max(high, num);
        }

        int low = 0;
        int res = 0;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int k = max(mid, 1);
            int time = kokoTime(piles, k);
            if (time <= h)
            {
                res = k;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return res;
    }
};
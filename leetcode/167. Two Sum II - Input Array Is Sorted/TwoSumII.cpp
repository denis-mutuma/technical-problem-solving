class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        vector<int> result;

        int low = 0, high = numbers.size() - 1;

        while (low < high)
        {
            if (numbers[low] + numbers[high] == target)
            {
                result.push_back(low + 1);
                result.push_back(high + 1);
                break;
            }
            else if (numbers[low] + numbers[high] > target)
            {
                high--;
            }
            else if (numbers[low] + numbers[high] < target)
            {
                low++;
            }
        }

        return result;
    }
};
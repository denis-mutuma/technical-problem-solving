class Solution
{
public:
    int findIndex(vector<vector<int>> &vec, int target)
    {
        int low = 0, high = vec.size() - 1;
        int n = vec[0].size();
        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (vec[mid][0] <= target && vec[mid][n - 1] >= target)
            {
                return mid;
            }
            else if (vec[mid][0] > target && vec[mid][n - 1] > target)
            {
                high = mid - 1;
            }
            else if (vec[mid][0] < target && vec[mid][n - 1] < target)
            {
                low = mid + 1;
            }
        }
        return 0;
    }

    bool binarySearch(vector<int> &vec, int target)
    {
        int low = 0, high = vec.size() - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (vec[mid] == target)
            {
                return true;
            }
            else if (vec[mid] < target)
            {
                low = mid + 1;
            }
            else if (vec[mid] > target)
            {
                high = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int index = findIndex(matrix, target);
        return binarySearch(matrix[index], target);
    }
};
class Solution
{
public:
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
            else if (vec[mid] > target)
            {
                high = mid - 1;
            }
            else if (vec[mid] < target)
            {
                low = mid + 1;
            }
        }
        return false;
    }

    int findMid(vector<vector<int>> &matrix, int target)
    {
        int low = 0, high = matrix.size() - 1;
        int mid = (high + low) / 2;
        int n = matrix[0].size() - 1;

        while (low <= high)
        {
            mid = (high + low) / 2;

            if (matrix[mid][0] <= target && matrix[mid][n] >= target)
            {
                return mid;
            }
            else if (matrix[mid][0] > target)
            {
                high = mid - 1;
            }
            else if (matrix[mid][0] < target)
            {
                low = mid + 1;
            }
        }
        return mid;
    }

    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int mid = findMid(matrix, target);

        return binarySearch(matrix[mid], target);
    }
};
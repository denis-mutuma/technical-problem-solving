class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int rows = grid.size(), cols = grid[0].size();
        int islands = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, i, j, rows, cols);
                    islands++;
                }
            }
        }
        return islands;
    }
    void dfs(vector<vector<char>> &grid, int i, int j, int rows, int cols)
    {
        if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] != '1')
        {
            return;
        }
        grid[i][j] = 'X';
        dfs(grid, i + 1, j, rows, cols);
        dfs(grid, i - 1, j, rows, cols);
        dfs(grid, i, j + 1, rows, cols);
        dfs(grid, i, j - 1, rows, cols);
    }
};
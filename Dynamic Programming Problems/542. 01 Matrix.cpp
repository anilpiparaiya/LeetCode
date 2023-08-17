class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> grid(n, vector<int>(m, n + m)); 
  
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    grid[i][j] = 0;
                } else {
                    if (i > 0) grid[i][j] = min(grid[i][j], grid[i - 1][j] + 1);
                    if (j > 0) grid[i][j] = min(grid[i][j], grid[i][j - 1] + 1);
                }
            }
        }

   

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (i < n - 1) grid[i][j] = min(grid[i][j], grid[i + 1][j] + 1);
                if (j < m - 1) grid[i][j] = min(grid[i][j], grid[i][j + 1] + 1);
            }
        }

        return grid;
    }
};

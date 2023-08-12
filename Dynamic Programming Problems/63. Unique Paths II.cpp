class Solution {
 public:
  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    const int m = obstacleGrid.size();
    const int n = obstacleGrid[0].size();

    vector<long> dp(n);
    dp[0] = 1;

    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (obstacleGrid[i][j])
          dp[j] = 0;
        else if (j > 0)
          dp[j] += dp[j - 1];

    return dp[n - 1];
  }
};


// Solution 2

class Solution {
public:
    int dfs(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>> &dp,int m ,int n)
    {
        
        if(i<0 || j<0 || i>=m || j>=n || obstacleGrid[i][j]==1)
            return 0;
        
      
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        
        if(i==m-1 && j==n-1)
        {    
            return 1;
        }
        
        
        return dp[i][j]=dfs(obstacleGrid,i,j+1,dp,m,n)+dfs(obstacleGrid,i+1,j,dp,m,n);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m=obstacleGrid.size();      // no. of rows
        int n=obstacleGrid[0].size();   // no. of columns
        
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        
        return dfs(obstacleGrid,0,0,dp,m,n);   
    }
};


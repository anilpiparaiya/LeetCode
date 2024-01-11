class Solution {
public:
    
    
 void dfs(int i,int j,int m,int n,vector<vector<char>>&grid){
        
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]=='0'){ 
            return ;
            
        }
        
        if(grid[i][j]=='1'){
            grid[i][j]='0';
        }
        
        dfs(i+1,j,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i-1,j,m,n,grid);
        dfs(i,j-1,m,n,grid);
        
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]=='1'){
                    dfs(i,j,m,n,grid);
                    count++;
                }
                
            }
        }
        
        return count;
        
    }
};

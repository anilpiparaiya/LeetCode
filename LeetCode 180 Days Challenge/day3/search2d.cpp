class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            
            if(matrix[i][0]==target)
                return true;
            else if(matrix[i][0]>target)
            {   if(i==0)
                return false;
                for(int j=0;j<matrix[i-1].size();j++)
                {
                    if(matrix[i-1][j]==target)
                        return true;
                }
             return false;
            }
            else if(i==matrix.size()-1)
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target)
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};

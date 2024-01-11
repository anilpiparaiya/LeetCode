class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        long int m=matrix.size(),n=matrix[0].size();
       bool first=false,column=false,row=false;
        if(matrix[0][0]==0)
            first=true;
        for(long int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                column=true;
                break;
            }
        }
        for(long int j=1;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                row=true;
                break;
            }
        }
        for(long int i=1;i<m;i++)
        {
            for(long int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(long int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(long int j=0;j<n;j++)
                    matrix[i][j]=0;
            }
        }
        for(long int j=1;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                for(long int i=0;i<m;i++)
                    matrix[i][j]=0;
            }
        }
        if(first)
        {
            for(long int i=1;i<m;i++)
                matrix[i][0]=0;
            for(long int j=1;j<n;j++)
                matrix[0][j]=0;
        }
        if(row)
        {
           for(long int j=0;j<n;j++)
                matrix[0][j]=0; 
        }
        if(column)
        {
             for(long int i=0;i<m;i++)
                matrix[i][0]=0;
        }
    }
};

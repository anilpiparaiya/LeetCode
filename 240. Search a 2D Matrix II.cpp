// Brute force solution using Linear Search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();


        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                if(matrix[row][col] == target){
                    return true;
                }
            }
        }


        return false;
    }
};

// Better Solution taking the advantage of row wise and column wise sorted property
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int i= 0, j = m-1;

        while(i<n && j>=0){
            if(matrix[i][j] == target){
                return true;
            }

            if(matrix[i][j] > target){
                j--;
            }

            else{
                i++;
            }
        }


        return false;
        
    }
};

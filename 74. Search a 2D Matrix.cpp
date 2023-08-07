// Brute force approach using Linear Search O(n*m)

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


// Better Solution

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


// Optimal solution using Binary Search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0, high = (n*m) -1;


        while(low <= high){
            int mid = low + (high-low)/2;

            if(matrix[mid/m][mid%m] == target){
                return true;
            }

            if(matrix[mid/m][mid%m] < target){
                low = mid + 1;
            }

            else{
                high = mid - 1;
            }

        }

        return false;
    }
};

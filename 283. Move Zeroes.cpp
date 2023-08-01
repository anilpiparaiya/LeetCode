// Brute force solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        vector<int>temp;

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }

        for(int i=0; i< temp.size(); i++){
            nums[i] = temp[i];
        }

        for(int i = temp.size(); i<n; i++){
            nums[i] = 0;
        }
        
    }
};


// Optimal Solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        //place the pointer j:
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        //no non-zero elements:
        if (j == -1) return;

        //Move the pointers i and j
        //and swap accordingly:
        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
    }
};

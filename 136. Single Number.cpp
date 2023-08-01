// Solution 1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        //Run a loop for selecting elements:
        for (int i = 0; i < n; i++) {
            int num = nums[i]; // selected element
            int count = 0;

        

        //find the occurrence using linear search:
        for (int j = 0; j < n; j++) {
            if (nums[j] == num)
                count++;
        }

        // if the occurrence is 1 return ans:
        if (count == 1) return num;
    }

    return -1;
        
    }
};


// Solution 2


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;

        for(int i=0; i<n; i++){
            xor1 = xor1^nums[i];
        }

        return xor1;
        
    }
};

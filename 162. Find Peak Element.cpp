class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
        //Checking for the peak:
        if ((i == 0 || nums[i - 1] < nums[i])
                && (i == n - 1 || nums[i] > nums[i + 1])) {
            return i;
        }
    }
    // Dummy return statement
    return -1;

        
    }
};

// Solution 1

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i<nums.size(); ++i)
        {
            if(nums[i] % 2 == 0)
            {
                swap(nums[i],nums[j]);
                ++j;
            }
        }
        return nums;
    }
};


// Solution 2

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l = 0, r = A.size() - 1;
        while (l < r) {
            if (A[l] % 2 != 0) {
                swap(A[l], A[r]);
                --r;
            } else {
                ++l;
            }
        }
        return A;
    }
};

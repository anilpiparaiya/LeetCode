// Recursive Solution

class Solution {
public:

    int binarySearch(vector<int>& nums, int low, int high, int target){
        if(low>high){
            return -1;
        }

        int mid = low + (high-low) / 2;

        if(nums[mid] == target){
            return mid;
        }

        else if(target > nums[mid]){
            return binarySearch(nums, mid+1, high, target);
        }

        else{
            return binarySearch(nums, low, mid-1, target);

        }

        
    }

    int search(vector<int>& nums, int target) {

        return binarySearch(nums, 0, nums.size() -1, target);
        
    }
};


// Iterative Solution

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high && target >= nums[low] && target <= nums[high]){
            if(low == high){
                if(nums[low] == target) return low;
                return -1;
            }

            int pos = low + (((double)(high - low) / (nums[high] - nums[low])) * (target - nums[low]));


            if(nums[pos] == target){
                return pos;
            }

            if(nums[pos] < target){
                low = pos + 1;
            }

            else{
                high = pos - 1;
            }
        }

        return -1;
        
    }
};

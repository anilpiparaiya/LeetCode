// Solution 1
class Solution{
    public:

    bool isMonotonic(vector<int>& nums){
        int n = nums.size();
        int dir = 0;
        for(int i=1; i<n; i++){
            if(dir == 0 && nums[i] > nums[i-1]){
                dir = 1;
            }

            else if(dir==0 && nums[i] < nums[i-1]){
                dir = -1;
            }

            else if(dir == 1 && nums[i] < nums[i-1]){
                return false;
            }

            else if(dir == -1 && nums[i] > nums[i-1]){
                return false;
            }
        }

        return true;
    }

}
// Solution 2
class Solution {
public:
        bool isMonotonic(vector<int> nums) {
        bool inc = true, dec = true;
        for (int i = 1; i < nums.size(); ++i)
            inc &= nums[i - 1] <= nums[i], dec &= nums[i - 1] >= nums[i];
        return inc || dec;
    }
};

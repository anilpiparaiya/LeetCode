class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
       bool rotated = false;
       for(int i = 0; i < n; i++){
           if(nums[i] > nums[(i+1)%n]){
               if(rotated) return false;
               rotated = true;
           }
           else if(nums[i] == nums[(i+1)%n]) continue;
       }
       return true;
    }
};

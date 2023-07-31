// Solution 1: Brute Force

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> set;
        for(int i=0; i<n; i++){
            set.insert(nums[i]);

        }

        int k = set.size();
        int j = 0;
        for (int x: set) {
            nums[j++] = x;
        }
        
        return k;
    }
};


// Solution 2: Two pointers

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int i = 0;
       for(int j = 1; j<n; j++){
           if(nums[i] != nums[j]){
               i++;
               nums[i] = nums[j];
           }
       }
        
        return i + 1;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int index = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }

        return index;
        
    }
};


// Solution 2

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[count++] = nums[i];
            }
        }

        return count;
        
    }
};

// Solution 3

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         
        vector<int> :: iterator it;
        it = nums.begin();

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == val){
                nums.erase(it);

                it--;
                i--;
            }

            it++;
        }

        return nums.size();
        
    }
};

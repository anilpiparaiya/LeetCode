// Brute force approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++){
            int count = 0;

            for(int j=i; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }


            if(count > n/2) return nums[i];
        } 

        return -1;       
    }
};


// Better Approach using map

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            if(it.second > n /2){
                return it.first;
            }
        }

        return -1;
        
    }
};

// Optimal approach using Moore's voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int element;

        for(int i=0; i<n; i++){
            if(count == 0){
                count = 1;
                element = nums[i];
            }

            else if(nums[i] == element){
                count++;
            }

            else{
                count--;
            }
        }

        int count1 = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == element) count1++;
        }

        if(count1 > n/2){
            return element;
        }

        return -1;
        
    }
};

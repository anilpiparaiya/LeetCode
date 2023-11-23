// 1st solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n= nums.size(); 
        for(int i=0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }

        return ans;
        
    }
};

// 2nd Solution

lass Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int>mp;
        for(int i=0; i<n; i++){
            int a = nums[i];
            int next = target - a;
            if(mp.find(next) != mp.end()){
                return {mp[next], i};
            }
            mp[a] = i;
        }

        return {-1, -1};


        
    }
};

// 3rd solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int>mp;
        for(int i=0; i<n; i++){
            int start = nums[i];
            int next = target - start;
            if(mp.find(next) != mp.end()){
                return {mp[next], i};
            }
            mp[start] = i;
        }

        return {-1, -1};


        
    }
};

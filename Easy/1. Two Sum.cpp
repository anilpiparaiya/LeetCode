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

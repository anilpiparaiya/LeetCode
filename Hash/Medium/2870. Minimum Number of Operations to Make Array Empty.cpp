class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int count = 0;
        for(auto a: mp){
            int t = a.second;
            if(t == 1) return -1;
            count += t/3;
            if(t%3) count++;
        }
        return count;
    }
};

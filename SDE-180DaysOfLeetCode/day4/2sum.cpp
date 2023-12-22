class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>vec;
        vector<int>result;
        long int i=0,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(find(vec.begin(),vec.end(),target-nums[i])!=vec.end())
            {
                result.push_back(find(vec.begin(),vec.end(),target-nums[i])-vec.begin());
                result.push_back(i);
                return result;
            }else{
                vec.push_back(nums[i]);
            }
        }
        return result;
    }
};

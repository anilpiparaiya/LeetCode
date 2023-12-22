class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>result;
        if(nums.size()<4)
            return result;
        long long int sum=0;
        int i=0,j=0,left=0,right=nums.size()-1;
        for(i=0;i<nums.size()-3;i++)
        {   
            for(j=i+1;j<nums.size()-2;j++)
            {left=j+1;
             right=nums.size()-1;
              sum=target-nums[i]-nums[j];
             while(left<right){
               
                if((nums[left]+nums[right])==sum)
                {vector<int>vec;
                 vec.push_back(nums[i]);
                 vec.push_back(nums[j]);
                 vec.push_back(nums[left]);
                 vec.push_back(nums[right]);
                    result.push_back(vec);
                 while(left<right&&nums[left]==nums[left+1])
                            left++;
                    left++;
                 while(left<right&&nums[right]==nums[right-1])
                            right--;
                    right--;
                }else if((nums[left]+nums[right])<sum){
                        while(left<right&&nums[left]==nums[left+1])
                            left++;
                    left++;
                }else{
                    while(left<right&&nums[right]==nums[right-1])
                            right--;
                    right--;
                }
            }
             while(j<nums.size()-2&&nums[j]==nums[j+1])
                 j++;
            }
              while(i<nums.size()-3&&nums[i]==nums[i+1])
                 i++;
        }
        return result;
    }
};

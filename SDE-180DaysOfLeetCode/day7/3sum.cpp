class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>vec;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return vec;
        int left=0,right=nums.size()-1,i=0,sum=0,sum2=0;
        for(i=0;i<=nums.size()-3;i++)
        {
            sum2=0-nums[i];
           
            left=i+1;
            right=nums.size()-1;
            while(left<right)
            {
                sum=nums[left]+nums[right];
              
                if(sum==sum2)
                {
                    vector<int>m;
                    m.push_back(nums[i]);
                    m.push_back(nums[left]);
                    m.push_back(nums[right]);
                    vec.push_back(m);
                   
                    while(left<right&&(nums[left]==nums[left+1]))
                    {
                        left++;
                    }
                    while((left<right)&&(nums[right]==nums[right-1]))
                    {
                        right--;
                    }
                    
                        left++;
                        right--;
                
                }else if(sum>sum2)
                {
                     while(left<right&&nums[right]==nums[right-1])
                    {
                        right--;
                    }
                     
                        right--;
                    
                }else{
                     while(left<right&&nums[left]==nums[left+1])
                    {
                        left++;
                    }
                   
                        left++;
                       
                    
                }
            }
            while(i<nums.size()-2&&nums[i]==nums[i+1])
                i++;
            }
        return vec;
    }
};

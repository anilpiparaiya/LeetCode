class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int num;
        vector<int>vec;
        num=nums[0];
        long int n=nums.size(),i=0,count=0;
        for(i=0;i<n;i++)
        {
            while(i<n && nums[i]==num)
            {
                count++;
                i++;
            }
        
            if(count>0)
            {   if(count>=(n/3+1))
                vec.push_back(nums[i-1]);
            
             count=0;
             if(i!=n)
             num=nums[i];
             i--;
            }
            
        }
        return vec;
    }
};
